/*
36-phone-book	2014-11-03 12:11
Program name : phone book
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program for storing phone numbers  .
*/
#include <stdio.h>
#include <string.h>
struct contact 
{
	char name[50] , family[50] , number[13];
};
struct phoneBook
{
	struct contact contacts[100] ;
	int top ;
}myPhoneBook;
void add();
void removeContact();
void show();
int main(int argc, const char *argv[])
{
	int choice ;
	myPhoneBook.top=0;
	do 
	{
		printf("Enter what you want : \n1-add contact \n2-remove contact\n3-show contact\n4-exit\n(1-4)? : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				add();
			break;
			case 2:
				removeContact();
			break;
			case 3 :
				show();
			break ; 
			case 4 :
			break;
			default:
				printf("Please enter number between 1 to 4 \n");
		}
	} while (choice !=4);
	return 0;
}
/*
this is function for to add a new contact
*/
void add()
{
	if(myPhoneBook.top<100)
	{
		printf("name :");
		gets(myPhoneBook.contacts[myPhoneBook.top].name);//its capture first enter 
		gets(myPhoneBook.contacts[myPhoneBook.top].name);
		printf("family :");
		gets(myPhoneBook.contacts[myPhoneBook.top].family);
		printf("number :");
		gets(myPhoneBook.contacts[myPhoneBook.top].number);
		myPhoneBook.top++;
	}
	else 
		printf("phone book is full .\n");
}
/*
this is function for removin a contact	
*/
void removeContact()
{
	int isFounded =0;
	char name[50] ,family[50];
	printf("Enter \nname :");
	gets(name);// it capture first enter
	gets(name);
	printf("family :");
	gets(family);
	for (int i = 0; i <=myPhoneBook.top; i++) 
	{
		if ( isFounded )
		{
			 myPhoneBook.contacts[i-1]=myPhoneBook.contacts[i];
		}
		else if ( strcmp(myPhoneBook.contacts[i].name,name)==0 &&  strcmp(myPhoneBook.contacts[i].family,family)==0  )
		{
			 char accept , enter ;
			 printf("\t do you want remove  --> name : %s family : %s number : %s : (y-n)? : ",name ,family,myPhoneBook.contacts[i].number);
			 scanf("%c",&accept);
			 scanf("%c",&enter);
			 if(accept == 'y')
				if(i==myPhoneBook.top)
				{
					myPhoneBook.top--;
					isFounded=1;
				}
			 	else 
			 	{
			 	//myPhoneBook.contacts[i]=myPhoneBook.contacts[i+1]
					isFounded=1;
			 	}
		}
	}
	if(!isFounded)
		printf("This person is not in the Phone book\n");
}
/*
this is function for showing contact details .
*/
void show()
{
	char name[50] , family[50] ;
	printf("Enter \nname :");
	gets(name);// it capture first enter
	gets(name);
	printf("family :");
	gets(family);
	for (int i = 0; i <=myPhoneBook.top; i++) 
	{
		if(strcmp(myPhoneBook.contacts[i].name,name)==0 &&  strcmp(myPhoneBook.contacts[i].family,family)==0 )
		{
			printf("\t### name : %s family : %s number : %s \n",name ,family,myPhoneBook.contacts[i].number);
		}
	}
	printf("\n");
}
