//PROGRAM TO SWAP VALUES BY USING CALL BY VALUE PARAMETER PASSING

#include<stdio.h>
#include<conio.h>

void swap(int,int);

void main()
{
	int num1;
	int num2;

	clrscr();
	printf("\n\n ENTER FIRST NUMBER:\t");
	scanf("%d",&num1);
	printf("\n\n ENTER SECOND NUMBER:\t");
	scanf("%d",&num2);
	printf("\n\n IN MAIN FUNCTION..........");
	printf("\n\n BEFORE SWAP FUNCTION..........");
	printf("\n\n NUM1 = %d \t NUM2 = %d",num1,num2);
	swap(num1,num2);
	printf("\n\n IN MAIN FUNCTION..........");
	printf("\n\n AFTER RETURNING FROM SWAP FUNCTION..........");
	printf("\n\n NUM1 = %d \t NUM2 = %d",num1,num2);
	getch();
}

void swap(int n1,int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("\n\n IN SWAP FUNCTION..........");
	printf("\n\n NUM1 = %d \t NUM2 = %d",n1,n2);
}
