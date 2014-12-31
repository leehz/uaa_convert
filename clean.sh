#!/usr/bin/env bash

file=`cat .gitignore`

for i in $file
do 
    if [ -e $i ]
    then
        echo "delete $i"
        rm -rf $i
    fi
done
