import sys
import os
import glob

#fucntion to calculate the longest path in a given fucntion
def longest_path(function):
	val = -1
	fucntion_max = 0 #max length of current function
	for i in range(0, 2): 
		val = function.find(' ', val + 1)
	samples = function[val+1:len(function)-1].split(' ')
	
	for sample in samples:
		path = sample[sample.find(',')+1:sample.rfind(',')]
		count = path.count('|')+1
		if count>fucntion_max:
			fucntion_max = count
		#print(path)
	return fucntion_max
def main(files):
    	# files = ["../data/dataset.test.c2s","../data/dataset.train.c2s","../data/dataset.val.c2s"]
	
	# files = ["../data/filterd_functions.c2s"]
	limit = 10 #the limit for path length, change it to check how many functions are under this limit

	underlimit = 0
	global_max = 0 #max length of all files
	print(files)
	for idx,file in enumerate(files):
		with open(file,'r') as fp:
			local_max = 0
			maxline = 1
			for j,line in enumerate(fp):
				count = longest_path(line) #max length of current fucntion
				if count > local_max:
					local_max = count
					maxline = j+1
			if local_max > global_max:
				global_max = local_max
		print("the longest line in file number {} is: {} and it's length is {}".format(idx+1,maxline,local_max))
	print("max path length is: ",global_max)
	print("number of samples under the limit is:",underlimit)

if __name__ == '__main__':
	data_folder = sys.argv[1]
	# data_folder = dir_path = os.path.realpath(data_folder)
	# print (data_folder)
	# file_names = ["dataset.test.c2s","dataset.train.c2s","dataset.val.c2s"]
	files = os.listdir(data_folder)
	files = [data_folder +"/" + file for file in files]
	# for idx,file in enumerate(files):
	# 	with open(file,'r') as fp:
	# 		print(fp.name)
	main(files)


	
