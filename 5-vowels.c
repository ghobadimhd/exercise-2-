/*
5-vowels	2014-11-02 09:11
Program name : vowels
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for check that a letter is a vowel or not .
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	char letter ;
	printf("Please enter an english letter : ");
	scanf("%c",&letter);
	if(letter >96 && letter < 122 )
		letter -= 32;
	switch(letter)
	{
		case 65 :
		case 69 :
		case 73 : 
		case 79 :
		case 85 :
		printf("%c is vowel\n",letter);
		break;
		default:
		printf("%c is not vowel\n",letter);
	}
	return 0;
}
