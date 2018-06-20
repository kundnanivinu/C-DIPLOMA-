//PROGRAM TO USE CHARACTERS AND STRINGS
#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	char name1[15],name2[15],name3[15];
	clrscr();
	printf("\n\n ENTER SERIAL NUMBER AND FIRST NAME\n");
	scanf("%d \t %15s",&no,name1);
	printf("\n %d %15s",no,name1);
	fflush(stdin);
	printf("\n\n ENTER SERIAL NUMBER AND SECOND NAME\n");
	scanf("%d %s",&no,name2);
	printf("\n %d %s",no,name2);
	fflush(stdin);
	printf("\n\n ENTER SERIAL NUMBER AND THIRD NAME\n");
	scanf("%d %[^\n]",&no,name3);
	printf("\n %d %s",no,name3);
	getch();
}