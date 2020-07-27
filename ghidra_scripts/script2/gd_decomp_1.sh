#!/bin/bash

#script to automatically decompile and output source code of a binary with ghidra

GHIDRA_PATH=/home/daniel/Desktop/ghidra/ghidra_9.1.2_PUBLIC_20200212/ghidra_9.1.2_PUBLIC
BINARY_NAME=fauxware
BINARY_PATH=/home/daniel/automatic_functionality_detection/ghidra_scripts
OUTPUT_PATH=$BINARY_PATH/script2/res/
$GHIDRA_PATH/support/analyzeHeadless res Test.gpr -import $BINARY_PATH/$BINARY_NAME -postScript GhidraDecompiler.java $OUTPUT_PATH -deleteProject -noanalysis
