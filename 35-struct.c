/*
35-struct	2014-11-01 23:11
Program name : struct
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for defining a struct .
*/
#include <stdio.h>
struct man
{
	char *name;
	char *family;
	int nationalCode;
}hasani;
int main(int argc, const char *argv[])
{
	hasani.name="hasani";
	hasani.family="hasan abadi";
	hasani.nationalCode= 123;	
	return 0;
}
