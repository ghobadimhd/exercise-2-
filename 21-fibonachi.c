/*
21-fibonachi	2014-11-01 18:11
Program name : fibonachi
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for printing fibonachi series on screen  .
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int n , a1=0 , a2 = 1 , temp;
	printf("Please enter a number : ");
	scanf("%d",&n);
	for (int i = 0; i <n; i++) 
	{
		printf("%d , ",a2);
		temp = a2 ;
		a2 += a1 ;
		a1=temp ;
	}
	printf("\b\b \n");
	return 0;
}
