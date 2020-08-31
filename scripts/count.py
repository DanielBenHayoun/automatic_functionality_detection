import sys
import os
import glob

files = ["data/dataset.test.c2s","data/dataset.train.c2s","data/dataset.val.c2s"]

files = ["data/filterd_functions.c2s"]
limit = 3000 #the limit for path length, change it to check how many functions are under this limit

underlimit = 0
global_max = 0 #max length of all files
for idx,file in enumerate(files):
	with open(file,'r') as fp:
		local_max = 0 #max length of current file
		j = 1
		maxline = 1
		for line in fp:
			count = line.count('|')+1
			if count>local_max:
				local_max = count
				maxline = j
				if local_max>global_max:
					global_max = local_max
			if count<limit:
				underlimit += 1
			j += 1
	print("the longest line in file number {} is: {} and it's length is {}".format(idx+1,maxline,local_max))
print("max path length is: ",global_max)
print("number of samples under the limit is:",underlimit)	