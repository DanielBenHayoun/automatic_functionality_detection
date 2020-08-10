#!/bin/bash
########################################################
# change the following to run decompilation process:
#
# SOURCE_PATH - path to binaries 
# OUTPUT_PATH - path to output
#
#this script decompiling all binaries from specific folder, and than clean the folder from failed decompilation files

SOURCE_FOLDER=coreutils_bins/*
SCRIPT_PATH=./ghidra_scripts/script2/gd_decomp_1.sh
OUTPUT_FOLDER=~/automatic_functionality_detection/decompile_output

#Decompile

for f in $SOURCE_FOLDER
do
	echo decompiling $(basename $f) 
	${SCRIPT_PATH} $(basename $f)
	echo finished decompiling $(basename $f). output in $OUTPUT_FOLDER
done

echo finished decompiling al binaries from $SOURCE_FOLDER



#Clean
echo clean $OUTPUT_FOLDER

i=0
j=0
for f in $OUTPUT_FOLDER/*
do
	echo checking $(basename $f) 
	res=`cat ${OUTPUT_FOLDER}/$(basename $f) | grep halt_baddata`
	if [[ -n ${res} ]] 
		then
		let j=$j+1
		echo remove $(basename $f)
		rm ${OUTPUT_FOLDER}/$(basename $f)
	fi
	let i=$i+1;
done
ans=$((i-j))
echo total removed: $j 
echo total remaining: $ans


