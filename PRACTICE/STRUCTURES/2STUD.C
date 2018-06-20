//PROGRAM TO SCAN AND DISPLAY TWO STRUCTURES

#include<stdio.h>
#include<conio.h>

void main()
{
	struct student
	{
		int roll_no;
		char name[30];
		float perc;
	}stud1,stud2;

	clrscr();

	printf("\n\n ENTEER THE RECORD 1...............");
	printf("\n\n ENTER THE ROLL NUMBER OF STUDENT:\t");
	scanf("%d",&stud1.roll_no);
	fflush(stdin);
	printf("\n\n ENTER THE NAME OF STUDENT:\t");
	gets(stud1.name);
	printf("\n\n ENTER THE PERCENTAGE OF STUDENT:\t");
	scanf("%f",&stud1.perc);
	printf("\n\n ENTEER THE RECORD 2...............");
	printf("\n\n ENTER THE ROLL NUMBER OF STUDENT:\t");
	scanf("%d",&stud2.roll_no);
	fflush(stdin);
	printf("\n\n ENTER THE NAME OF STUDENT:\t");
	gets(stud2.name);
	printf("\n\n ENTER THE PERCENTAGE OF STUDENT:\t");
	scanf("%f",&stud2.perc);

	printf("\n\n----------------------------------------------------");
	printf("\n\n THE RECORDS ARE AS FOLLOWS..........");
	printf("\n\n ROLL NUMBER \t NAME \t\t\t PERCENTAGE");
	printf("\n\n %d \t\t %s \t %.2f",stud1.roll_no,stud1.name,stud1.perc);
	printf("\n\n %d \t\t %s \t\t %.2f",stud2.roll_no,stud2.name,stud2.perc);
	getch();
}
