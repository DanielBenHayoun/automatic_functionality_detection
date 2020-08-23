import sys
import os


def maximum(a,b,c):
	print("checking max")
	if (a >= b) and (a >= c):
		largest = a
	elif (b >= a) and (b >= c):
		largest = b
	else:
		largest = c
	return largest

def main():
	files = ["cppminer_res/dataset.test.c2s","cppminer_res/dataset.train.c2s","cppminer_res/dataset.val.c2s"]
	limit = 4000 #the limit for path length, change it to check how many functions are under this limit
	underlimit = 0
	global_max = 0 #max length of all files
	for idx,file in enumerate(files):
		with open(file,'r') as fp:
			local_max = 0 #max length of current file
			j = 1
			maxline = 1
			for line in fp:
				count = 0
				for i in line:
					if i == '|':
						count = count + 1
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
if __name__ == "__main__":
	main()