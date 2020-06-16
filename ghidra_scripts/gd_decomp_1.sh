#!/bin/bash

#script to automatically decompile and output source code of a binary with ghidra

GHIDRA_PATH=/home/daniel/Desktop/ghidra/ghidra_9.1.2_PUBLIC_20200212/ghidra_9.1.2_PUBLIC
DECOMPILE_SCRIPT_PATH=/home/daniel/Desktop/project_deco
BINARY_NAME=fauxware
FUNCTION_ADDRES=0

$GHIDRA_PATH/support/analyzeHeadless . Test.gpr -import $BINARY_NAME -postScript GhidraDecompiler.java $FUNCTION_ADDRESS -deleteProject -noanalysis
