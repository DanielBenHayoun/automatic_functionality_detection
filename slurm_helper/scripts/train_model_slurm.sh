#!/bin/bash

###################################
# change the following to run train.sh with slurm:
# CODE2SEQ_PATH - the path to train.sh script 
#
# to run this script :
# sbatch -c 10 --gres=gpu:2  -o code2seq_train_slurm.out -J code2seqDaniel  train_model_slurm.sh
#
# NOTE: the train results will be in this folder, unless you edit train.sh to any ouptupt path you wish

echo "activate enviroment RE_project_1"
source $HOME/anaconda3/etc/profile.d/conda.sh
conda activate RE_project_1
CODE2SEQ_PATH=$HOME/final_project/automatic_functionality_detection/code2seq
cd $CODE2SEQ_PATH
echo "start train..."

./train.sh

echo "finished train!"