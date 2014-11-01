/*
25-binary-search	2014-11-01 19:11
Program name : binary search
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for searching array with binary search algorithm .
*/
#include <stdio.h>
void bubbleSort(int[],int );
int binarySearch(int[],int,int);
int main(int argc, const char *argv[])
{
        int length , number;
        printf("Please enter array length : ");
        scanf("%d",&length);
        int array[length];
        printf("Enter %d numbers : \n",length);
        for (int i = 0; i <length; i++)
        {
                scanf("%d",&array[i] );
        }
	printf("Enter number to search : ");
	scanf("%d",&number);
        bubbleSort(array,length);
        printf("number index is %d\n",binarySearch(array,length,number));
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
/*
this is function for searching sorted array with binary search algoritm
*/
int binarySearch(int array[],int length , int number)
{
	int front=0 , end =length-1, middle  ;
	while (front <=end) 
	{
		middle=(front + end ) /2 ;
		if (array[ middle] == number )
			 return middle ;
		else if(number < array[middle])
			end=middle-1 ;
		else 
			front = middle+1;
	}
	return -1;
}                            
