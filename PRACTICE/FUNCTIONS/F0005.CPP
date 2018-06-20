//PROGRAM TO FIND FACTORIAL OF A NUMBER BY RECURSION

#include<stdio.h>
#include<conio.h>
long int factorial(int);
long int factorial(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return(n*factorial(n-1));
}
void main()
{
	clrscr();
	int num;
	printf("\n\nENTER A NUMBER :");
	scanf("%d",&num);
	if(num>=0)
		printf("\n\nFACTORIAL OF %d IS %ld",num,factorial(num));
	else
		printf("\n\nINVALID INPUT");
	getch();
}
