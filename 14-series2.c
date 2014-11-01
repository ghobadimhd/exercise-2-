/*
14-series2	2014-11-01 Nov:11
Program name : series2 
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for calculating sum of series : x/1! + x^2/2! + ... + x^n/n!
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int x , n , power=1 , factorial=1;
	float sum=0;
	printf("Please enter x and n seprated by space\n");
	scanf("%d %d",&x,&n);
	for (int i = 1; i <= n; i++) 
	{
		power *= x ;
		factorial *= i ;
		sum += (float)power/factorial;
	}
	printf("sum of series is %f \n",sum);
	return 0;
}
