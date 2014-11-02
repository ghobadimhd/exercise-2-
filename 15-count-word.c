/*
15-count-word	2014-11-02 10:11
Program name : count word
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for counting string words  .
*/
#include <stdio.h>
/*
main fuction pass every thing until find a letter , count it as a word and count it as word 
then pass adjacent letter and repeat the process again 
util get the end of string .
*/
int main(int argc, const char *argv[])
{
	char *string ;
	int count= 0 , i=0 ;
	printf("Enter a string  : ");
	gets(string);
	while(string[i] != '\0')
	{
		while (!(string[i] > 64 && string[i] <91) && !(string[i] > 96 && string[i]<123) && string[i] != '\0') 
			 i++;
		if(string[i] != '\0')
		{ 
			count++;
			i++ ;
			while ((string[i] > 64 && string[i] <91) || (string[i] > 96 && string[i]<123) ) 
				i++;
		}
	}
	printf("there is %d number word in string .\n",count);
	return 0;
}
