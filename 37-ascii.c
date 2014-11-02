/*
37-ascii	2014-11-02 19:11
Program name : ascii
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for printing ascii code of character .
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char character ;
	printf("Enter a character : ");
	scanf("%c",&character);
	printf("%d\n",character);
	return 0;
}
