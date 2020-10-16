# Automatic Functionality Detection Of Stripped Binaries
this projects extends [code2seq](https://github.com/tech-srl/code2seq) to work with striiped bibaries instead of source code. currently suppurts C/C++.

availdbale for  Ubuntu 18.04.3 LTS.

## prerequisites:
 
 - [ java SDK 11 ](https://www.oracle.com/java/technologies/javase-jdk11-downloads.html)
 - [Ghidra](https://github.com/NationalSecurityAgency/ghidra) ( follow download guide or simply clone repository)
 - [python 3](https://www.python.org/downloads/release/python-381/)

clone into this repo.
```sh
git clone https://github.com/DanielBenHayoun/automatic_functionality_detection.git --recursive
```

the following instruction assume the current location is ~/automatic_functionality_detection/

## enviroment setup
**install Anaconda:**
###### run the following commands:
```sh
$ wget https://repo.continuum.io/archive/Anaconda3-2020.02-Linux-x86_64.sh
$ bash /path_to_downloaded_script/Anaconda3-2020.02-Linux-x86_64.sh
```
where `path_to_downloaded_script` is the path for Anaconda3-2020.02-Linux-x86_64.sh on your machine. or follow [instalation_guide](https://docs.anaconda.com/anaconda/install/linux/)

###### Create enviroment:
```sh
$ conda env update -f environment.yml
$ conda activate RE_project_1
```
To check what conda environments you have and which is active, run
`conda env list`

## Create dataset
in order to create dataset you will need to run the script decompile_all.sh ( change paths within the script )
```sh 
$ ./scripts/decompile_all.sh
```
this script will decompile all binaries from SOURCE_PATH to OUTPUT_PATH (predifined in the script)

## Train
### Create Paths
after you've decompiled succesfuly the binaries, you need to extract paths from the source code. 
run the script create_paths.sh (  change paths within the script  )
##### NOTE: follow the instructions regarding requirements here: [cppminer](https://github.com/Kolkir/cppminer/tree/b07e2e4e966088f430e4345f475176f03d524bcd#1-miner)
```sh 
$ ./scripts/create_paths.sh
```

### Pre-Preprocess
now you need to create to train,test and validation datasets. run this script  :
```sh 
$ ./scripts/pre_preprocess.sh <INPUT_FOLDER> <OUTPUT_FOLDER>
```

### preprocess
create dictionaries and arrange dataset run the script inside cppminer/code2seq and add parameters acccordingly :
#### NOTE: follow instructions inside the [script](https://github.com/tech-srl/code2seq/blob/f5c827e01361707f2923a080c3455d4b92ea41ed/preprocess.sh).
optional:
```sh 
$ ./cppminer/code2seq/preprocess.sh <INPUT_FOLDER> <OUTPUT_FOLDER>
```
### Train
run training using the script inside code2seq/ and change the parameters according to the instructions iside train.sh


NOTE: it is recommended to change code2seq/config.py file cefore training according to the designated mission. in this project we changed batch-size to be 11 and test-batch-size to 2

```sh 
$ ./code2seq/train.sh 
```
