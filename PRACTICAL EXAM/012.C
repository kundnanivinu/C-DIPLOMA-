//PROGRAM TO DISPLAY CLASS OF STUDENT

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks1;
	int marks2;
	int marks3;
	int total;
	float percent;

	clrscr();

	printf("\n\n ENTER THE FIRST NUMBER:\t");
	scanf("%d",&marks1);
	printf("\n\n ENTER THE SECOND NUMBER:\t");
	scanf("%d",&marks2);
	printf("\n\n ENTER THE THIRD NUMBER:\t");
	scanf("%d",&marks3);

	total = marks1 + marks2 + marks3;
	percent = total / 300.0 *100;
	printf("\n\n TOTAL IS %d",total);
	printf("\n\n PERCENTAGE IS %.2f",percent);

	if(percent>=75 && percent<100)
		printf("\n\n FIRST CLASS WITH DISTINCTION");
	else if(percent>=60 && percent<75)
		printf("\n\n FIRST CLASS");
	else if(percent>=50 && percent<60)
		printf("\n\n SECOND CLASS");
	else if(percent>=40 && percent<50)
		printf("\n\n PASS CLASS");
	else if(marks1<40 || marks2<40 || marks3<40)
		printf("\n\n FAIL");
	else
		printf("\n\n IMPROPER INPUT!!");
	getch();
}