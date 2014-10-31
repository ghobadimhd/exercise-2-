/*
14-series2	2014-10-31 Oct:10
Program name : series2
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for calculating sum of math series : x/1! + x^2/2! + ... +x^n/n
*/
#include <stdio.h>
int power(int,int);
int factorial(int);
int main(int argc, const char *argv[])
{
	int sum=0 , x , n ;
	printf("Please enter x and n : ");
	scanf("%d %d",&x , &n);
	for (int i = 1; i <= n; i++) 
	{
		sum +=( power(x,i)/factorial(i)) ;
		
	}
	return 0;
}
/*
this is function for calculating power 
*/
int power(int num, int pwr )
{
	int isNagetive =0;
	float result ;
	if (pwr< 0) 
	{
		isNagetive = 1;	
		pwr *=-1;
	}
	for (int i = 0; i < pwr; i++) 
	{
		result *=(float) num;
	}
	result = isNagetive  ? 1/result : result ;
	return result ;
}
/*
this is function for calculating factorial
*/
int factorial(int num)
{
	int fact=1;
	for (int i = 2; i <= num; i++) 
	{
		fact*=i;
	}
	return fact;
}
