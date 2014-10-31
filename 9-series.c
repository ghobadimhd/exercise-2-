/*
9-series	2014-10-31 Oct:10
Program name : series
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for calculating sum of  math series : 1/1! - 1/2! + ... + 1/n
*/
#include <stdio.h>
int factorial(int);
int main(int argc, const char *argv[])
{
	int n , factor = 1 ;
	float sum=0;
	printf("Please enter n : ");
	scanf("%d",&n);
	for (int i = 1; i <= n ; i++) 
	{
		sum += (1/(float)factorial(i)) * factor;
		factor *= -1;
		
	}
	printf("result is %f \n",sum);
	return 0;
}
/*
this is function for calculating factorial of given number
*/
int factorial(int number)
{
	int fact =1 ;
	for (int i = 2; i <= number; i++) 
	{
		fact *=i;	
	}
	return fact ;
}
