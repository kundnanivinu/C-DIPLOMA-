//PROGRAM TO PRINT FACTORIAL OF NUMBER USING RECURSIVE FUNCTION

#include<stdio.h>
#include<conio.h>

long int fact (int);

void main()
{
	int num;

	clrscr();
	printf("\n\n ENTER THE NUMBER TO FIND ITS FACTORIAL:\t");
	scanf("%d",&num);
	if(num < 0)
		printf("\n\n IMPROPER INPUT!!");
	else
		printf("\n\n FACTORIAL OF %d IS %ld",num,fact(num));
	getch();
}

long int fact(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return (n * fact(n-1));
}

