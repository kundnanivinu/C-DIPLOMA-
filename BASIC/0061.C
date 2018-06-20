//PROGRAM TO DISPLAY NAME AND OTHER DATA
#include<stdio.h>
#include<conio.h>

void main()
{
	char gender,name[20],married;
	clrscr();
	printf("\n\n ENTER YOUR NAME:\t");
	scanf("%[^\n]",name);
	fflush(stdin);
	printf("\n\n ENTER YOUR GENDER:\t");
	scanf("%c",&gender);
	fflush(stdin);
	if(gender=='f' || gender=='F')
	{
		printf("\n\n ARE YOU MARRIED?(y/n): \t");
		scanf("%c",&married);
			if(married=='y' || married=='Y')
			{
				printf("\n\n HELLO MRS.%s",name);
			}
			else
			{
				printf("\n\n HELLO MS.%s",name);
			}
	}
	else
	{
		printf("\n\n HELLO MR.%s",name);
	}
	getch();
}