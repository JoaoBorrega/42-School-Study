#!/bin/sh
ls -l | awk '{print $0; {getline}}' 
