/*
31-palindrome	2014-11-01 22:11
Program name : palindrome
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for  .
*/
#include <stdio.h>
int isPalindrome(int);
int main(int argc, const char *argv[])
{
	int number ;
	printf("Please enter a number : ");
	scanf("%d",&number);
	if ( isPalindrome(number)  )
	{
		printf("%d is palindrome \n",number);
	}
	else 
	{
		printf("%d is not palindrome \n",number);
	}
	return 0;
}
/*
this is function for 
*/
int isPalindrome(int number)
{
	int reversed=0 , temp =number;
	while (temp != 0) 
	{
		reversed = reversed * 10 + temp % 10 ;
		temp /= 10;
	}
	if ( reversed == number )
		return 1 ;
	else 
		return 0 ;
}
