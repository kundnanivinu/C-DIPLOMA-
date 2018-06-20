//PROGRAM TO FIND TOTAL OF 3 NUMBERS AND THEIR AVERAGE

#include<stdio.h>
#include<conio.h>

void main()
{
	int num1;
	int num2;
	int num3;
	int sum;
	float average;

	clrscr();

	printf("\n\n ENTER THE FIRST NUMBER:\t");
	scanf("%d",&num1);
	printf("\n\n ENTER THE SECOND NUMBER:\t");
	scanf("%d",&num2);
	printf("\n\n ENTER THE THIRD NUMBER:\t");
	scanf("%d",&num3);

	sum = num1 + num2 + num3;
	average = sum / 3.0;

	printf("\n\n SUM OF %d , %d AND %d IS %d",num1,num2,num3,sum);
	printf("\n\n AVERAGE OF %d , %d AND %d IS %.2f",num1,num2,num3,average);

	getch();
}