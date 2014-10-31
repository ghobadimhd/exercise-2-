/*
6-uppercase	2014-10-31 Oct:10
Program name : uppercase
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for changing lowercase letter to uppercase letter	
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char ch ;
	printf("Please enter a character : \n");
	scanf("%c",&ch);
	if (ch > 96 && ch < 123) 
	{
		ch-=32;	
	}
	printf("%c\n",ch);
	return 0;
}
