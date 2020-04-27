#!/bin/bash

# Setup env
source $HOME/miniconda3/etc/profile.d/conda.sh
conda activate cs236781-hw
echo "hello from $(python --version) in $(which python)"

# Run some arbitrary python
python -c 'import torch; print(f"i can haz gpu? {torch.cuda.is_available()}")'
