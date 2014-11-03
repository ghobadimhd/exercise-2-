/*
36-phone-book	2014-11-03 12:11
Program name : phone book
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for storing phone numbers  .
*/
#include <stdio.h>
struct contact 
{
	char name[50] , family[50] , phone[13];
};
struct phoneBook 
{
	contact contacts[100];
	int top=0;
};
void add();
void remove(char[],char[]);
void show(char[],char[]);
int main(int argc, const char *argv[])
{
	int choice ;
	do 
	{
		printf("Enter what you want : \n1-add contact \n 2-remove contact\n3-show contact\n4-exit\n(1-4)? : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				add();
			break;
			case 2:
				remove();
			break;
			case 3 :
				show();
			break ; 
			case 4 :
			break;
			default:
				printf("Please enter number between 1 to 4 \n");
		}
	} while (choice ==4);
	return 0;
}
