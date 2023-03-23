#!/bin/bash

echo "What is your name? " 

read name

echo "Welcome to group_5 $name"

read -p "Enter your score: " score

if ((score < 80));
then
	echo "Sory, you're out, do try again later"
elif ((score == 80));
then
	echo "You where lucky! Congrats"
elif ((score > 80));
then
	echo "You're so good! Welcome"
fi


