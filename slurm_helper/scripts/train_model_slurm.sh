#!/bin/bash



echo "activate enviroment RE_project_1"
source $HOME/anaconda3/etc/profile.d/conda.sh
conda activate RE_project_1
CODE2SEQ_PATH=~/automatic_functionality_detection/code2seq
cd $CODE2SEQ_PATH 

 echo "start train..."

./train.sh

echo "finished train!"