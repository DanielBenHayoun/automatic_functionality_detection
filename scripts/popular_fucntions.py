import sys 
import os
import glob

#finding the name of the fucntion	
def func_name_extractor(function):
	val = -1
	for i in range(0, 2): 
		val = function.find(' ', val + 1)
	function_name = function[function.find(')')+1:val]
	return function_name
	

def main(files , output_folder):
	mapper = dict()
	popular_funcs = set()

	for file in files :

		# with open("../data/filterd_functions.c2s",'r') as fp:
		with open(file,'r') as fp:
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
	for partial in map(lambda x: x[1], filter(lambda x: len(x[1]) >= 3, mapper.items())):
		popular_funcs.update(partial)
	popular_funcs = list(popular_funcs)
#end of finding the popular functions names
			#print("++++++++++++++++++++++++++++++++++++++++++++++++++")
	# print(popular_funcs)
	print(len(popular_funcs))
		
	#writing the popular functions into the output file
	
	with open(output_folder +"filterd_and_popular_functions.c2s",'w') as output:
		print("files")
		print(files)
		print(len(files))
		for file in files :
			print(file)
			with open(file,'r') as fp:
				for function in fp:
					function_name = func_name_extractor(function)
					if function_name in popular_funcs:
						output.write(function)
						# print(function_name)
			
if __name__ == '__main__':
	input_folder = sys.argv[1]
	output_folder= sys.argv[2]
	file_names = os.listdir(input_folder)
	# files = [if file.co input_folder +"/" + file for file in file_names]
	files = glob.glob(input_folder + "/*.c2s")
	# print(files)
	main(files,output_folder)
