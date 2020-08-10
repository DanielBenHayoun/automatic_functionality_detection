#!/bin/bash

#script to automatically decompile and output source code of a binary with ghidra

GHIDRA_PATH=~/ghidra_9.1.2_PUBLIC_20200212/ghidra_9.1.2_PUBLIC
BINARY_NAME=$1
BINARY_PATH=~/automatic_functionality_detection/coreutils_bins
OUTPUT_PATH=~/automatic_functionality_detection/decompile_output
SCRIPT_PATH=/home/daniel/automatic_functionality_detection/ghidra_scripts/script2
$GHIDRA_PATH/support/analyzeHeadless . Test.gpr -import $BINARY_PATH/$BINARY_NAME -postScript GhidraDecompiler.java $OUTPUT_PATH $BINARY_NAME  -scriptPATH $SCRIPT_PATH -deleteProject -noanalysis
