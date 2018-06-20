//EXCHANGING VALUES USING POINTERS

#include<stdio.h>
#include<conio.h>

void swap(int*,int*);

void main()
{
	int num1;
	int num2;

	clrscr();

	printf("\n\n ENTER THE FIRST NUMBER:\t");
	scanf("%d",&num1);
	printf("\n\n ENTER THE SECOND NUMBER:\t");
	scanf("%d",&num2);

	swap(&num1,&num2);

	printf("\n\n IN MAIN FUNCTION.........");
	printf("\n\n AFTER RETURNING FROM SWAP FUNCTION......");
	printf("\n\n NUMBER1 = %d \t NUMBER2 = %d",num1,num2);

	getch();
}

void swap(int *num1,int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

