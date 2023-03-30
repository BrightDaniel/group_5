#!/bin/bash
read -p "Enter a number: " num1
read -p "Enter another number: " num2
read -p "Enter an operand ( +, -, *, / ) : " opr1
case $opr1 in
	'+')
		echo "The sum of the numbers is " $(($num1+$num2))
		;;
	'-')
		echo "The differnce in both numbers is "$(($num1-$num2))
		;;
	'*')
		echo "The result of multipling both numbers is "$(($num1*$num2))
		;;
	'/')
		echo "the result of the division is "$(($num1/$num2))
		;;
	*)
		echo "your entry does not match any of the conditions"
		;;
	esac
