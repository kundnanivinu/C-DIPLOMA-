#include<stdio.h>
#include<conio.h>

int evenodd(int);
void main()
{
	int num,n;
	clrscr();
	printf("\n ENTER THE VALUE OF num:\t");
	scanf("%d",&num);
	n=evenodd(num);
	if(n==0)
		printf("EVEN");
	else
		printf("ODD");
	getch();
}

int evenodd(int n)
{
	if(n%2==0)
		return 0;
	else
		return 1;
}