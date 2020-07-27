this script create a ghidra project(tmp_ghidra_project) including .rep folder and .gpr file.

the result of the decompilation will be found at res/output.c (single file)

you can try and re-compile it (need adjusments to C code) 

#### NOTE: if you want to run the script again with the same binary, you need to delete these project files

run:
```sh
$ cd automatic_functionality_detection/ghidra_scripts/script1
$ ./gd_decomp.sh fauxware
```
* you can use each binary name you want instead of fauxware


