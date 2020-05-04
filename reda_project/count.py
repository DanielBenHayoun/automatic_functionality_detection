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
	with open("datasets/cfg_overfitting_test/ady_constantless_test_output.txt",'r') as fp1:
		max1 = 0
		for line in fp1:
			count = 0
			for i in line: 
				if i == '|': 
					count = count + 1
			if count>max1:
				max1=count
		
	with open("datasets/cfg_overfitting_test/ady_constantless_train_output.txt",'r') as fp2:
		max2 = 0
		for line in fp2:
			count = 0
			for i in line: 
				if i == '|': 
					count = count + 1
			if count>max2:
				max2=count
		
	with open("datasets/cfg_overfitting_test/ady_constantless_val_output.txt",'r') as fp3:
		max3 = 0
		for line in fp3:
			count = 0
			for i in line: 
				if i == '|': 
					count = count + 1
			if count>max3:
				max3=count
	print("max path length is: ",maximum(max1,max2,max3))
	
if __name__ == "__main__":
	main()

			