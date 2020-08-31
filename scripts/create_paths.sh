#!/bin/bash
########################################################
# change the following to run miner.py in cppminer:
#
# SOURCE_PATH - path to source file (*.c)
# OUTPUT_PATH - path to output
# PROJECT_FOLDER - path to project folder
#
# this script create paths from cppminer (binary--->AST-->PATHS)


SOURCE_PATH=~/automatic_functionality_detection/decompile_output
OUTPUT_PATH=~/automatic_functionality_detection/cppminer_res
PROJECT_FOLDER=~/automatic_functionality_detection/
LIBCLANG_PATH=$HOME/anaconda3/envs/daniel/lib/libclang-cpp.so
MAX_PATH_LEN=$1

# python3  ${PROJECT_FOLDER}/cppminer/src/miner.py -e $LIBCLANG_PATH -l $MAX_PATH_LEN $SOURCE_PATH $OUTPUT_PATH
python3  ${PROJECT_FOLDER}/cppminer/src/miner.py -c 0 -l $MAX_PATH_LEN $SOURCE_PATH $OUTPUT_PATH