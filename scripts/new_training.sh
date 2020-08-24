#!/bin/bash
########################################################
# change the following in order to start new training:
#TODO : change config accordingly and run train

PROJECT_FOLDER=~/final_project/automatic_functionality_detection/

FINAL_DATA_DIR=%{PROJECT_FOLDER}/final_data

CPPMINER_PREPROCESS=${PROJECT_FOLDER}/cppminer/code2seq
#clean
rm -f %{FINAL_DATA_DIR}/data/dataset/*.c2s

#paths limitations 

LIMIT=100
python3 ${PROJECT_FOLDER}/functions_filter.py ${LIMIT}

#merge paths 
# NOTE: input is from ../automatic_functionality_detection/data

cd ${PROJECT_FOLDER}/scripts/
./merge_paths.sh

# preprocss the data 
cd ${CPPMINER_PREPROCESS}
./preprocess.sh ../../data ../../final_data


#TODO : add train.sh and change config.py