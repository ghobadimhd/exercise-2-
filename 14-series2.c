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
		sum +=( power(x,i)/factotial(i)) ;
		
	}
	return 0;
}
