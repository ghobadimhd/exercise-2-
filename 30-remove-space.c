/*
30-remove-space	2014-11-02 14:11
Program name : remove space
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for removing extra spaces that are in strings .
*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char *string ,*string2="" ;
	int isUniq=0 , i=0;
	printf("Enter a string : ");
	gets(string);
	while (string[i]!='\0') 
	{
		 if ( string[i]==' ')
		 {
			if( isUniq )
		 	{
				strcat(string2, { string[i],'\0'});
				isUniq=0;
			}
		 }
		else 
		{
		 	strcat(string2, { string[i],'\0'});
			isUniq=1;
		}
	}
	puts(string2);	
	return 0;
}
