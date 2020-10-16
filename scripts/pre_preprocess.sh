#!/bin/bash

if [ "$#" -ne    2 ]
then 
    echo "$0 <input_folder> <output_folder>"

    exit
fi

INPUT_FOLDER=$1
OUTPUT_FOLDER=$2

python3 ./pre_preprocess.py $INPUT_FOLDER $OUTPUT_FOLDER
