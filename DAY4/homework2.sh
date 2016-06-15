#!/bin/bash

# 과제2 - 구구단 출력하는 함수

function print_multiplication()
{
	num1=2
	until (( $num1 >= 10 ))
	do
		num2=2
		until (( $num2 >= 10 ))
		do
			echo -n "$num1 * $num2 = "
			echo $(($num1*$num2))
			num2=$(($num2+1))
		done
		num1=$(($num1+1))
	done
}

#print_multiplication

