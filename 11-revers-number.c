/*
11-revers-number	2014-10-31 Oct:10
Program name : revers number
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for reversing given number
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int number , reversed=0   ;
	printf("Please enter a number : ");
	scanf("%d",&number);
	while (number != 0 ) 
	{
		reversed = reversed * 10 + number % 10 ;
		number /= 10 ;
		
	}
	printf("%d \n",reversed);
	return 0;
}
