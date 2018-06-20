//PROGRAM TO FIND WHETHER EMPLOYEE CAN BE INSURED OR NOT
#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	char ms,gender;             //ms=marital status
	clrscr();
	printf("\n\n ARE YOU MARRIED?(M/U)\t");
	scanf("%c",&ms);
	fflush(stdin);
	if(ms=='m' || ms=='M')
	{
		printf("\n\n YOU CAN BE INSURED");
	}
	else if(ms=='u' || ms=='U')
	{
		printf("\n\n ENTER YOUR GENDER:\t");
		scanf("%c",&gender);
		fflush(stdin);
		printf("\n\n ENTER YOUR AGE:\t");
		scanf("%d",&age);
		fflush(stdin);
		if(gender=='m' || gender=='M')
		{
			if(age>30)
			{
				printf("\n\n YOU CAN BE INSURED");
			}
			else
			{
				printf("\n\n YOU CANNOT BE INSURED");
			}
		}
		else if(gender=='f' || gender=='F')
		{
			if(age>25)
			{
				printf("\n\n YOU CAN BE INSURED");
			}
			else
			{
				printf("\n\n YOU CANNOT BE INSURED");
			}
		}
		else
		{
			printf("\n\n IMPROPER INPUT!!");
		}
	}
	else
	{
		printf("\n\n IMPROPER INPUT!!");
	}
	getch();
}