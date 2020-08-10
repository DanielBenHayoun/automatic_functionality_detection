import glob


max=0
file_list=glob.glob("reda_project/datasets/cfg_overfitting_test/*.txt")
for file in file_list:
    with  open(file,"r") as reader:
        temp=reader.readline().count('|')
        if temp > max:
            max=temp


print(f"max len is: {max}")

