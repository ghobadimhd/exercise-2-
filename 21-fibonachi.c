/*
21-fibonachi	2014-11-01 18:11
Program name : fibonachi
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for printing fibonachi series on screen  .
*/
#include <stdio.h>
int getFibonachi(int n);
int main(int argc, const char *argv[])
{
	int n ;
	printf("Please enter a number : ");
	scanf("%d",&n);
	for (int i = 0; i <=n; i++) 
	{
		printf("%d , ",getFibonachi(i) );
	}
	printf("\b\b \n");
	return 0;
}
/*
this is function for geting Nth fibonachi number 
*/
int getFibonachi(int n)
{
	if ( n == 1 || n == 0)
	{
		 return 1;	
	}
	else 
	{
		return getFibonachi(n-1) + getFibonachi(n-2);
	}
}
