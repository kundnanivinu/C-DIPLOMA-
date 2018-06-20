//PROGRAM TO ACCEPT MARKS OF THREE SUBJECTS AND PRINT TOTAL AND AVERAGE

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks1;
	int marks2;
	int marks3;
	int total;
	float average;

	clrscr();

	printf("\n\n ENTER THE FIRST NUMBER:\t");
	scanf("%d",&marks1);
	printf("\n\n ENTER THE SECOND NUMBER:\t");
	scanf("%d",&marks2);
	printf("\n\n ENTER THE THIRD NUMBER:\t");
	scanf("%d",&marks3);

	total = marks1 + marks2 + marks3;
	average = total / 3.0;

	printf("\n\n TOTAL OF %d , %d AND %d IS %d",marks1,marks2,marks3,total);
	printf("\n\n AVERAGE OF %d , %d AND %d IS %.2f",marks1,marks2,marks3,average);

	getch();
}