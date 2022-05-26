#!/bin/bash

echo -n input number:  
read num
echo $num

list=( red green blue )

for i in ${list[*]}
do
	echo $i
done

