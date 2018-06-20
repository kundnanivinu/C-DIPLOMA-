//PROGRAM TO INITIALIZE AND DISPLAY TWO STRUCTURES

#include<stdio.h>
#include<conio.h>

void main()
{
	struct date
	{
		int day;
		char month[20];
		int year;
	};
	struct account
	{
		int acc_no;
		char name[20];
		float balance;
		struct date dob;
	};
	struct date d = {20,"APRIL",2010};
	struct account acc = {143,"DOLLY HARCHANDANI",1000000000,{10,"OCTOBER",1993}};

	clrscr();

	printf("\n\n THE RECORDS ARE AS FOLLOWS..............");
	printf("\n\n DATE : \t");
	printf("%d %s %d",d.day,d.month,d.year);
	printf("\n\n ACCOUNT DETAILS............ ");
	printf("\n\n ACCOUNT NUMBER : %d",acc.acc_no);
	printf("\n\n NAME OF DEPOSITER: %s",acc.name);
	printf("\n\n CURRENT BALANCE : %.2f",acc.balance);
	printf("\n\n DATE OF BIRTH : %d %s %d ",acc.dob.day,acc.dob.month,acc.dob.year);
	getch();
}
