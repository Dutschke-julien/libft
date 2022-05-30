#!/bin/bash

function timer
{
i=0
printf "\n                       Norminette"
sleep 0.1
printf ". "
sleep 0.1
printf ". "
sleep 0.1
printf ".\n\n"
printf "             \e[1;34m   ["
while [ $i -le 4 ]
do
    printf "\e[1;34m■■■■■"
    sleep 0.1
let i=$i+1
done
echo -e "■]\n"
}
#Update
timer
echo -e "                 [↑↑Verification humaine↑↑]"
