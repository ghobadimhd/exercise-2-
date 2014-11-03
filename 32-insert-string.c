/*
32-insert-string	2014-11-02 19:11
Program name : insert string
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for insert a string at specific point of another .
*/
#include <stdio.h>
#include <string.h>
int count(char[]);
int main(int argc, const char *argv[])
{
	char *string1 , *string2 ;
	int point , i=0 , length ;
	printf("Enter first string : ");
	gets(string1);
	printf("Enter the insert point : ");
	scanf("%d",&point);
	printf("Enter second string : ");
	gets(string2);
	length=count(string1) + count(string2) + 1 ;
	char string3[length]=""; // there is a compiler error : variable-sized object may not be initialized
	for (i = 0; i < point ; i++) 
	{
		string3[i]=string1[i];
	}
	string3[i]='\0';
	strcat(string3,string2);
	i+=count(string2);
	while (string1[i]!='\0') 
	{
		string3[i]=string1[i];
	}
	string3[i]=string1[i];
	printf("%s\n",string3);
	return 0;
}
/*
this is function for getting the length of string .
*/
int count(char string[])
{
	int count=0 ,i=0;
	while (string[i]!='\0') 
	{
		count++;
		i++;
	}
	return 0;	
}
