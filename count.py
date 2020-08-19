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
	limit = 4000
	underlimit = 0
	with open("data/dataset/dataset.test.c2s",'r') as fp1:
		print("test")
		j = 1
		max1 = 0
		maxline1 = 1
		for line in fp1:
			count = 0
			for i in line:
				if i == '|':
					count = count + 1
			if count>max1:
				max1=count
				maxline1=j
			if count<limit:
				underlimit += 1
			j += 1
        
	with open("data/dataset/dataset.train.c2s",'r') as fp2:
		print("train")
		j = 1
		max2 = 0
		maxline2 = 0
		for line in fp2:
			count = 0
			for i in line:
				if i == '|':
					count = count + 1
			if count>max2:
				max2=count
				maxline2=j
			if count<limit:
				underlimit += 1
			j += 1
	
	with open("data/dataset/dataset.val.c2s",'r') as fp3:
		print("val")
		j = 1
		max3 = 0
		maxline3 = 0
		for line in fp3:
			count = 0
			for i in line:
				if i == '|':
					count = count + 1
			if count>max3:
				max3=count
				maxline3=j
			if count<limit:
				underlimit += 1
			j += 1
    
	print("max path length is: ",maximum(max1,max2,max3))

	print("the longest line in test is:",maxline1,"and it's length is:",max1)
	print("the longest line in train is:",maxline2,"and it's length is:",max2)
	print("the longest line in val is:",maxline3,"and it's length is:",max3)
	print("number of samples under the limit is:",underlimit)
	
if __name__ == "__main__":
	main()