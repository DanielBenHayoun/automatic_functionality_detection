#finding the name of the fucntion	
def func_name_extractor(function):
	val = -1
	for i in range(0, 2): 
		val = function.find(' ', val + 1)
	function_name = function[function.find(')')+1:val]
	return function_name
	

def main():
	mapper = dict()
	with open("../data/filterd_functions.c2s",'r') as fp:
		for function in fp:
			function_name = func_name_extractor(function)
			subtokens=function_name.split("|")
			#print(subtokens)
			#print("............................................")
			#making a dictionary that the key is a name of a subtoken, and the value is a list of the fucntions name with the subtoken is their name
			for label in subtokens:
				if label not in mapper:
					mapper[label] = []
				mapper[label].append(function_name)
			#end of the making of the dictionary
			
		#finding the popular functions names
		popular_funcs = set()
		#popular_names = filter(lambda x: len(x[1]) >= 3, mapper.items())
		for partial in map(lambda x: x[1], filter(lambda x: len(x[1]) >= 3, mapper.items())):
			popular_funcs.update(partial)
		popular_funcs = list(popular_funcs)
		#end of finding the popular functions names
		#print("++++++++++++++++++++++++++++++++++++++++++++++++++")
		#print(popular_funcs)
		#print(len(popular_funcs))
		
	#writing the popular functions into the output file
	with open("../data/filterd_functions.c2s",'r') as fp:
		with open("../data/filterd_and_popular_functions.c2s",'w') as output:
			for function in fp:
				function_name = func_name_extractor(function)
				if function_name in popular_funcs:
					output.write(function)
					#print(function_name)
		
if __name__ == '__main__':
    main()