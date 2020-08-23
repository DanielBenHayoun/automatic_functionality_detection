#!/bin/bash
########################################################
# change the following to run miner.py in cppminer:
#
# SOURCE_PATH - path to source file (paths from miner.py)
# PROJECT_FOLDER - path to project folder

# merge paths to datasets ( train test and validation)
# NOTE: output is in the same folder as SOURCE_PATH

# SOURCE_PATH=~/automatic_functionality_detection/cppminer_res
SOURCE_PATH=~/automatic_functionality_detection/data
PROJECT_FOLDER=~/automatic_functionality_detection/
python3  ${PROJECT_FOLDER}/cppminer/src/merge.py  $SOURCE_PATH