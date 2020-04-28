#!/bin/bash
###########################################################
# Change the following values to train a new model.
# type: the name of the new model, only affects the saved file name.
# dataset: the name of the dataset, as was preprocessed using preprocess.sh
# test_data: by default, points to the validation set, since this is the set that
#   will be evaluated after each training iteration. If you wish to test
#   on the final (held-out) test set, change 'val' to 'test'.
type=really_final_constantless
dataset_name=really_final_constantless
data_dir=/home/redaigbaria/sec_proj/code2seq/data/really_final_constantless
data=${data_dir}/${dataset_name}
test_data=${data_dir}/${dataset_name}.val.c2s
model_dir=/home/redaigbaria/sec_proj/code2seq/models/${type}

mkdir -p ${model_dir}
python3 -u code2seq.py --data ${data} --test ${test_data} --save_prefix ${model_dir}/model &

#type=final
#dataset_name=final
#data_dir=data/final
#data=${data_dir}/${dataset_name}
#test_data=${data_dir}/${dataset_name}.val.c2s
#model_dir=models/${type}
#
#mkdir -p ${model_dir}
#python code2seq.py --data ${data} --test ${test_data} --save_prefix ${model_dir}/model  &
#
#
#type=constantless_overfitting
#dataset_name=constantless_overfitting
#data_dir=data/constantless_overfitting
#data=${data_dir}/${dataset_name}
#test_data=${data_dir}/${dataset_name}.val.c2s
#model_dir=models/${type}
#
#mkdir -p ${model_dir}
#python code2seq.py --data ${data} --test ${test_data} --save_prefix ${model_dir}/model &
#

wait
