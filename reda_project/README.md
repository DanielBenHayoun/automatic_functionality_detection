# Automatic functionality recognition in a binary 

Hi,


you should run main for to get analysis output for the current binaries, run it with --binary_idx=i to analyze the i'th binary in the data set.
it's recommended to parallelize this process, after that run the function generate_output() to merge all the analysis and divide them into train/test/validate sets,
after that calculate the maximum path len in the generated output, (maximum number of tokens in the paths in the output, tokens are seperated between each other using | char),

write a simple function to calculate that, then change that in the code2seq/config.py file to be the number you got, 
the run the file code2seq/preprocess.sh and change the number in code2seq/config.py to what you got from the preprocess script,
then run the train.sh, make sure that the paths in each .sh script are legal and point to the same dataset....


Hope you enjoy :)


