#!/bin/bash

read -p "What is your name: " name

read -p "What is your cohort: " cohort

if [ $cohort -gt 14 ]
then 
	echo "I'm sorry, cohort must be < or equal to 14"
else 
	read -p "Input your score: " score
if [ $score -gt 170 ]
then
	echo "Sorry $name, your score must not be > 170"
else
	echo "Your name is $name, your cohort is $cohort and your score is $score"
fi
fi
