import glob

files= glob.glob("cppminer_res/*.c2s")
limit = 1000 #the limit for path length, change it to the size of the path you want to filter
with open("data/filterd_functions.c2s",'w') as output:
	for idx,file in enumerate(files):
		with open(file,'r') as fp:
			for line in fp:
				count = line.count('|')+1
				if count<limit:
					output.write(line)