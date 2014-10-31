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
	float number , power , result=1 ;
	printf("Please enter R and N seprated by space : ");
	scanf("%f %f",&number,&power);
	for (int i = 0; i <= power; i++) 
	{
		result *= number;
	}
	result = power < 0 ? 1/result : result;	
	printf("R ^ N = %f \n",result);
	return 0;
}
