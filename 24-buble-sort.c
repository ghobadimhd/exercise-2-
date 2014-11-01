/*
24-buble-sort	2014-11-01 19:11
Program name : bubble sort
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for sort an array with bubble algoritm  .
*/
#include <stdio.h>
void bubbleSort(int[],int );
int main(int argc, const char *argv[])
{
	int length ;
	printf("Please enter array length : ");
	scanf("%d",&length);
	int array[length];
	printf("Enter %d numbers : \n",length);
	for (int i = 0; i <length; i++) 
	{
		scanf("%d",&array[i] );
	}
	bubbleSort(array,length);
	printf("sorting done : \n");
	for (int i = 0; i <length; i++) 
	{
		printf("%d \n",array[i]);
	}
	return 0;
}
/*
this is function for sorting array with bubble sort algoritm
*/
void bubbleSort(int array[],int length)
{
	 int isSorted=1;
	 for (int i = length; i >0; i--) 
	 {
		
	 	for (int j = 0; j <i-1; j++) 
	 	{
			isSorted=1;
	 		int temp;
			if ( array[j]>array[j+1] )
			{
				temp=array[j];
				array[j]=array[j+1];
			 	array[j+1]=temp ;
			 	isSorted = 0;
			}
	 	}
		if ( isSorted  )
			return ;
	 }
}
