/*
33-string-compare	2014-11-03 08:11
Program name : string compare
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for comparing two string .
*/
#include <stdio.h>
int main(int argc, const char *argv[])
{
	char string[2][21];
	int i ;
	printf("Enter first string :");
	gets(string[0]);
	printf("Enter second string :");
	gets(string[1]);
	for ( i = 0; string[0][i]!='\0' && string[1][i] != '\0'; i++) 
	{
		switch(string[0][i]>string[1][i])
		{
			case 1:
				printf("first string is bigger\n");
				return 0;
			break;
			case 0:
				printf("second string is bigger\n");
				return 0;
			break;
				
		}
	}
		if ( string[0][i]=='\0' )
			printf("first string is bigger\n");
		else if(string[1][i]=='\0')
			printf("second string is bigger\n");
		else 
			printf("two string are equal\n");
	return 0;
}
