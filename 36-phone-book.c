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
	char name[50] , family[50] , number[13];
};
struct contacts
{
	contact contacts[100];
	int top=0;
}phoneBook;
void add();
void remove();
void show();
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
/*
this is function for to add a new contact
*/
void add()
{
	if(phoneBook.top<100)
	{
		printf("name :\n");
		gets(phoneBook.contact[phoneBook.top].name);
		printf("family :\n");
		gets(phoneBook.contact[phoneBook.top].family);
		printf("number :\n");
		gets(phoneBook.contact[phoneBook.top].number);
		phoneBook.top++;
	}
	else 
		printf("phone book is full .\n");
}

