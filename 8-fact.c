/*
8-fact	2014-10-31 Oct:10
Program name : Factorial
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for calculating factorial of numbers 
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int number , fact=1 ;	
	printf("Please enter a number : ");
	scanf("%d",&number);
	for (int i = 2; i <= number; i++) 
	{
		fact *=i;	
	}
	printf("%d\n",fact);
	return 0;
}
