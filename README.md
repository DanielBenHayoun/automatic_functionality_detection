# automatic_functionality_detection

availdbale for  Ubuntu 18.04.3 LTS.
for start clone into this repo.
```sh
git clone https://github.com/DanielBenHayoun/automatic_functionality_detection.git --recursive
```

the following instruction assume the current location is ~/automatic_functionality_detection/

## enviroment setup
**install Anaconda:**
###### run the following commands:
```sh
$ wget https://repo.continuum.io/archive/Anaconda3-2020.02-Linux-x86_64.sh
$ bash /path_to_downloaded_script/Anaconda3-2020.02-Linux-x86_64.sh
```
where `path_to_downloaded_script` is the path for Anaconda3-2020.02-Linux-x86_64.sh on your machine. or follow [instalation_guide](https://docs.anaconda.com/anaconda/install/linux/)

###### create enviroment:
```sh
$ conda env update -f slurm_helper/environment.yml`
$ conda activate RE_project_1
```
To check what conda environments you have and which is active, run
`conda env list`


