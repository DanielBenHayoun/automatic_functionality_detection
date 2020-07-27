#!/bin/bash

#script to automatically decompile and output source code of a binary with ghidra

GHIDRA_PATH=/home/daniel/Desktop/ghidra/ghidra_9.1.2_PUBLIC_20200212/ghidra_9.1.2_PUBLIC

BINARY_PATH=/home/daniel/automatic_functionality_detection/ghidra_scripts

if [ "$#" -ne    1 ]
then 
    echo "$0 <binary path> "
    exit
fi

#remove gpr and rep files first (CAREFUL!)
rm -rf *.gpr *.rep

#time $GHIDRA_PATH/support/analyzeHeadless . tmp_ghidra_project -import $1  -postscript $DECOMPILE_SCRIPT_PATH/Decompile.java $2

time $GHIDRA_PATH/support/analyzeHeadless res tmp_ghidra_project -import $BINARY_PATH/$1 -postscript DecompileCUSTOM.java res/output.c
