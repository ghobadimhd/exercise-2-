/*
23-search-array	2014-11-01 18:11
Program name : search array
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for search array for specific number .
*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int arrayLength , number ;
	printf("Please enter with of array : ");
	scanf("%d",&arrayLength);
	int array[arrayLength];
	printf("Enter %d numbers : \n",arrayLength);
	for (int i = 0; i <arrayLength; i++) 
	{
		scanf("%d",&array[i]);
	}
	printf("Please enter number for search : ",&number);
	scanf("%d",&number);
	for (int i = 0; i <arrayLength; i++) 
	{
		if(number == array[i])
			printf("number index is %d \n",i);
	}
	return 0;
}
