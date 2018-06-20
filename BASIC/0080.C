#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[100][3];
	int i,n;
	float perc;
	clrscr();
	printf("\n\n ENTER THE NUMBER OF ELEMENTS REQUIRED IN ARRAY:\t");
	scanf("%d",&n);
	printf("\n\n ENTER ELEMENTS OF ARRAY ONE BY ONE......");
	for(i=0;i<n;i++)
	{
		printf("\n\n\n\n ENTER RECORDS OF STUDENT %d:\t",i+1);
		printf("\n\n\n ENTER MARKS OF SUBJECT 1:\t");
		scanf("%d",&marks[i][0]);
		printf("\n\n ENTER MARKS OF SUBJECT 2:\t");
		scanf("%d",&marks[i][1]);
		printf("\n\n ENTER MARKS OF SUBJECT 3:\t");
		scanf("%d",&marks[i][2]);
	}
	printf("\n\n\n\n\n\n THE RECORDS OF STUDENTS ARE AS FOLLOWS.......");
	printf("\n--------------------------------------------------------------------------------");
	printf("\n\n  SR.NO  \t SUBJECT 1  \t SUBJECT 2 \t SUBJECT 3  \t  PERCENTAGE ");
	for(i=0;i<n;i++)
	{
		perc = (marks[i][0] + marks[i][1] + marks[i][2]) / 300.0 * 100;
		printf("\n-------------------------------------------------------------------------");
		printf("\n| %d  \t|\t %d  \t|\t %d  \t|\t %d  \t|\t  %.2f |",i+1,marks[i][0],marks[i][1],marks[i][2],perc);
		printf("\n-------------------------------------------------------------------------");
	}
	getch();
}
