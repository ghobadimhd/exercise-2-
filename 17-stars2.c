/*
17-stars2	2014-11-01 16:11
Program name : stars2
Author : Mohammad Ghobadi
Email : ghobadi.mhd@gmail.com
describtion : This is program for printing multiple stars on screen
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int rows ;
	char sign='*';
	printf("Please enter number of rows : ");
	scanf("%d",&rows);
	for (int i = 1; i <= rows; i++) 
	{
		if ( rows % 2 == 0 )
		{
			sign = i==rows/2 || i == rows/2 + 1  ? '+' : '*';
		}
		else 
		{
			sign = i==rows/2 + 1 ? '+' : '*';
		}
		for (int j =1; j <= i; j++) 
		{
			printf("%c",sign);
		}
		printf("\n");
	}
	return 0;
}
