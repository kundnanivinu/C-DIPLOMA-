#include<stdio.h>
#include<conio.h>

void evenodd(int);
void main()
{
	int num;
	clrscr();
	printf("\n ENTER THE VALUE OF num:\t");
	scanf("%d",&num);
	evenodd(num);
	getch();
}

void evenodd(int n)
{
	if(n%2==0)
		printf("EVEN");
	else
		printf("ODD");
}