/*
13-count-space	2014-11-02 09:11
Program name : count space
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for count how many space exist in a string  .
*/
#include <stdio.h>
int main(int argc, const char *argv[])
{
	char *string;
	int count=0;
	printf("Please enter a string : ");
	gets(string);
	int i = 0;
	while(string[i] != '\0')
	{
		if(string[i]==' ')
			count++;
		i++;
	}
	printf("there is %d space in string \n",count);
	return 0;
}
