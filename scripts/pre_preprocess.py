import sys 
import os
import glob
import math

#finding the name of the fucntion	
def func_name_extractor(function):
	val = -1
	for i in range(0, 2): 
		val = function.find(' ', val + 1)
	function_name = function[function.find(')')+1:val]
	return function_name
	

#input:  -dict of the popular functions with subtokens as key
#        -the folder to output
#output: -train,test,val files in the output_folder
def split_data(popular_mapper,output_folder):

		
	trainfile = open(output_folder+"/dataset.train.c2s", "w")
	testfile  = open(output_folder+"/dataset.test.c2s", "w")
	valfile   = open(output_folder+"/dataset.val.c2s", "w")
	
	
	
	used_funcs = []
	for subtoken,functions in popular_mapper.items():
		valid_funcs = []
		for function in functions:
			if function in used_funcs:
				continue
			used_funcs.append(function)
			valid_funcs.append(function)
			
		valid_funcs_length = len(valid_funcs)
		i = 0
		#print("len is ",valid_funcs_length)
		
		
		
		if valid_funcs_length>=3:
			while i<math.floor(0.7*valid_funcs_length):
				#print("train file write")
				#print("0.7*valid_funcs_length is:",math.floor(0.7*valid_funcs_length))
				#print("i is:",i)
				trainfile.write(valid_funcs[i])
				i+=1
			while i<math.floor(0.85*valid_funcs_length):
				#print("val file write")
				valfile.write(valid_funcs[i])
				i+=1
			while i<valid_funcs_length:
				#print("test file write")
				testfile.write(valid_funcs[i])
				i+=1
		else:
			while i<valid_funcs_length:
				trainfile.write(valid_funcs[i])
				i+=1
				
	trainfile.close()
	testfile.close()
	valfile.close()

#input :-files to scan	   
#output:-dict with subtoken as key,and the items are a list of fucntions(with function name and paths) corresponding to that key
def popular_functions(files):
	mapper = dict()
	
	for file in files :
		max_subtoken =0
		# with open("../data/filterd_functions.c2s",'r') as fp:
		with open(file,'r') as fp:
			for function in fp:
				function_name = func_name_extractor(function)
				subtokens=function_name.split("|")
				if len(subtokens) > max_subtoken:
					max_subtoken=len(subtokens)
				#making a dictionary that the key is a name of a subtoken, and the value is a list of the fucntions name with the subtoken is their name
				for label in subtokens:
					if label not in mapper:
						mapper[label] = []
					mapper[label].append(function)
					
				#end of the making of the dictionary
				
			#finding the popular functions names
			
	print("max subtokens is: ",max_subtoken)
	popular_mapper=dict(filter(lambda x: len(x[1]) >= 3, mapper.items()))
	
	return popular_mapper
	
	
def main(files , output_folder):
	
	popular_mapper = popular_functions(files)
	
	split_data(popular_mapper,output_folder)
	
if __name__ == '__main__':
	input_folder = sys.argv[1]
	output_folder= sys.argv[2]
	file_names = os.listdir(input_folder)
	# files = [if file.co input_folder +"/" + file for file in file_names]
	files = glob.glob(input_folder + "/*.c2s")
	# print(files)
	main(files,output_folder)
