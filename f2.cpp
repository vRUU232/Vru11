/*
* FILE : f2.cpp
* PROJECT : SENG1000 - Focused Assignment 2
* PROGRAMMER : vruti mistry
* FIRST VERSION : 2024-01-24
* DESCRIPTION:
* In this programme file is used to add integer from 1 to 500 using while loop and preview the sum after loop is ended.
*/

#include<stdio.h>

int main()
{

	int number = 0;
	int q = 1;
	int maximum_value = 500;
	int total = 0;


	while (q <= maximum_value)
	{

		total += q;

		q++;

	}

	printf("%d\n", total);


	return 0;
}