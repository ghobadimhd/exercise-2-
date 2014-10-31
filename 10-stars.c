/*
10-stars	2014-10-31 Oct:10
Program name : stars 
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for print multiple stars on screen 
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
