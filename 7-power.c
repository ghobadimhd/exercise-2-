/*
7-power	2014-10-31 Oct:10
Program name : power
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for calculating r power n
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int  number , power , isNagetive=0;
	float result=1 ;
	printf("Please enter R and N seprated by space : ");
	scanf("%d %d",&number,&power);
	if (power< 0) 
	{
		isNagetive = 1;	
		power *=-1;
	}
	for (int i = 0; i < power; i++) 
	{
		result *=(float) number;
	}
	result = isNagetive   ? 1 / result : result;	
	printf("R ^ N = %f \n",result);
	return 0;
}
