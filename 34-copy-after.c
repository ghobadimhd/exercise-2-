/*
34-copy-after	2014-11-02 15:11
Program name : copy after 
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for find a character in string and copy every thing after it .
*/
#include <stdio.h>
int main(int argc, const char *argv[])
{
	char *string , character ;
	int isFounded=0 , i=0;
	printf("Enter a string :");
	gets(string);
	printf("Enter a char : ");
	scanf("%c",&character);
	while (string[i]!='\0') 
	{
		if(isFounded)
			printf("%c",string[i]);
		else if ( string[i]==character )
			isFounded=1;
		i++;
	}
	printf("\n");
	return 0;
}
