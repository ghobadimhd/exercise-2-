/*
19-three-digit-num	2014-11-02 12:11
Program name : three digit number
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for count and print three digit number with no repeated digit in string  .
*/
#include <stdio.h>
int isRepeated(char[]);
/*
main fuction pass every thing until find a digit , then pass adjacent digit and count them if there are 2 more count them as 
three digit number , check for repeatd digit if there is no repeated digit print them then repeat the process again util get the end of string .
*/
int main(int argc, const char *argv[])
{
        char string[500] ;
        int count= 0 , i=0 , digitCount =0;
        printf("Enter a string  : ");
        gets(string);
        while(string[i] != '\0')
        {
                while (!(string[i] > 47 && string[i] <58) && string[i] != '\0')
                         i++;
                if(string[i] != '\0')
                {
                        digitCount=1;
                        i++ ;
                        while ((string[i] > 47 && string[i] <58) )
                        {
                                digitCount++;
                                i++;
                        }
                        if ( digitCount == 3 ) 
                        {
				char threeDigit[]={string[i-3],string[i-2],string[i-1],'\0' };
				if(!isRepeated(threeDigit))
				{
                                 	count++;
					printf("%s\n",threeDigit);
                                }
                        }
                }
        }
        printf("there is %d three digit  number in string .\n",count);
        return 0;
}
/*
this is function that check for repeated char in string .
*/
int isRepeated(char str[])
{
	 int i=0;
	 while (str[i]!='\0') 
	 {
	 	char ch=str[i] ;
	 	for (int j = i+1; str[j]!='\0'	; j++) 	
	 	{
	 		if(str[j]==ch)	
				return 1;
	 	}
		i++;
	 }
	return 0;
}
