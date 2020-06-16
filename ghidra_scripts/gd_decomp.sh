  
#!/bin/bash

#script to automatically decompile and output source code of a binary with ghidra

GHIDRA_PATH=/home/daniel/Desktop/ghidra/ghidra_9.1.2_PUBLIC_20200212/ghidra_9.1.2_PUBLIC
DECOMPILE_SCRIPT_PATH=/home/daniel/Desktop/project_deco

if [ "$#" -ne    2 ]
then 
    echo "$0 <binary path> <output source path>"
    exit
fi

#remove gpr and rep files first (CAREFUL!)
rm -rf *.gpr *.rep

#time $GHIDRA_PATH/support/analyzeHeadless . tmp_ghidra_project -import $1  -postscript $DECOMPILE_SCRIPT_PATH/Decompile.java $2

time $GHIDRA_PATH/support/analyzeHeadless . tmp_ghidra_project -import $1 -postscript DecompileCUSTOM.java $2
