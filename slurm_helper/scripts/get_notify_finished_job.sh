#!/bin/bash

#get job id

job_id=$1

echo job id: $1

strigger --set --jobid=$1 --fini --program=/home/danielben/automatic_functionality_detection/slurm_helper/scripts/set_trigger_job_finish.sh
