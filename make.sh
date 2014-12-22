#!/usr/bin/env bash

for i in `ls *.c`;
do 
    make `basename $i .c`
done

