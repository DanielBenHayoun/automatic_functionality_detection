#!/bin/bash
########################################################
# change the following to run decompilation process:
#
# SOURCE_PATH - path to binaries folder
# OUTPUT_PATH - path to output folder
#				NOTE: OUTPUT_PATH folder need to be existed
#
#this script decompiling all binaries from specific folder, and than clean the folder from failed decompilation files

SOURCE_FOLDER=../coreutils_bins/*
# SOURCE_FOLDER=/home/daniel/automatic_functionality_detection/ghidra_scripts
SCRIPT_PATH=../ghidra_scripts/script2/gd_decomp_1.sh
OUTPUT_FOLDER=~/automatic_functionality_detection/decompile_output_test


# create folder
#Decompile

for f in $SOURCE_FOLDER
do
	echo ${SCRIPT_PATH} $(basename $f)
	${SCRIPT_PATH} $(basename $f)
	echo finished decompiling $(basename $f). output in $OUTPUT_FOLDER
done

echo finished decompiling al binaries from $SOURCE_FOLDER



