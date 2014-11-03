/*
38-fibonachi2	2014-11-03 08:11
Program name : fiboanachi
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for printing Nth fibonachi number .
*/
#include <stdio.h>
int getFibonachi(int);
int main(int argc, const char *argv[])
{
	int n;	
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("%d\n",getFibonachi(n));
	return 0;
}
/*
this is function for geting Nth fibonachi number 
*/
int getFibonachi(int n)
{
        if ( n == 1 || n == 2)
                 return 1;    
	
        else 
                return getFibonachi(n-1) + getFibonachi(n-2);
}

