/*
30-remove-space	2014-11-02 14:11
Program name : remove space
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for removing extra spaces that are in strings .
*/
#include <stdio.h>
#include <string.h>
/*
the main function first pass every space it find until get a some thing else then copy it on string 2 , from now
when it get a character if the character was not a space copy else it copy a space and pass other spaces to get a some thing else 
*/
int main(int argc, const char *argv[])
{
	char *string ,*string2=""  ;
	int isUniq=0 , i=0;
	printf("Enter a string : ");
	gets(string);
	while (string[i]!='\0') 
	{
		 if ( string[i]==' ')
		 {
			if( isUniq )
		 	{				
				char ch[]={ string[i],'\0'};
				strcat(string2,ch);
				isUniq=0;
			}
		 }
		else 
		{
			char ch[]={ string[i],'\0'};
			strcat(string2,ch);
			isUniq=1;
		}
	}
	puts(string2);	
	return 0;
}
