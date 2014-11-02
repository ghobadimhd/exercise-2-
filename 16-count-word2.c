/*
16-count-word2	2014-11-02 11:11
Program name : count word 2
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for counting word with three letter .
*/
#include <stdio.h>
/*
main fuction pass every thing until find a letter , then pass adjacent letter and count them if there are 2 count them as 
three letter word and  repeat the process again util get the end of string .
*/
int main(int argc, const char *argv[])
{
        char *string ;
        int count= 0 , i=0 , letterCount =0;
        printf("Enter a string  : ");
        gets(string);
        while(string[i] != '\0')
        {   
                while (!(string[i] > 64 && string[i] <91) && !(string[i] > 96 && string[i]<123) && string[i] != '\0') 
                         i++;
                if(string[i] != '\0')
                {   
			letterCount=1;
                        i++ ;
                        while ((string[i] > 64 && string[i] <91) || (string[i] > 96 && string[i]<123) ) 
			{
				letterCount++;
                                i++;
			}
			if ( letterCount == 3 )
			{
				 count++; 
			}
                }   
        }   
        printf("there is %d number word in string .\n",count);
        return 0;
}

