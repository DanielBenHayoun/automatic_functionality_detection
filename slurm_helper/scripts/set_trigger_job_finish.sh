#!/bin/bash


# Notify administrator using by e-mail, The subject line will include the node names which have entered the down state (passed as an argument to the script by Slurm)
/bin/mail slurm_admin@site.com -s job finished:$*
