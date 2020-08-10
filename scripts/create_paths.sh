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

python3  ${PROJECT_FOLDER}/cppminer/src/miner.py $SOURCE_PATH $OUTPUT_PATH