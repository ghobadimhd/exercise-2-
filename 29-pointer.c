/*
29-pointer	2014-11-01 21:11
Program name : pointer
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for showing pointer address and ... .
*/
#include <stdio.h>
int main(int argc, const char *argv[])
{
	int var=12 , *p = &var ;
	printf("var : %d \nvar address : %p\npointer address :%p \n",*p,p,&p);
	return 0;
}
