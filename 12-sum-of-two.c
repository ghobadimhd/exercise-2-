/*
12-sum-of-two	2014-10-31 Oct:10
Program name : sum of two 
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for calculating sum of two number with function
*/
#include <stdio.h>
int sum(int, int );
int main(int argc, const char *argv[])
{
	int number1 , number2 ;
	printf("Please enter two number seprated with space : ");
	scanf("%d %d",&number1,&number2);
	printf("sum is %d \n",sum(number1 , number2 ));
	return 0;
}
/*
this is function for calculate sum of two number
*/
int sum(int number1 , int number2)
{
	return number1 + number2 ;
}
