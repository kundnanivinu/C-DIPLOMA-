//PROGRAM TO USE printf()
#include<stdio.h>
#include<conio.h>

void main()
{
	char city[6]="MUMBAI";
	int count=1275;
	float price=235.74;
	clrscr();
	printf("\n %d %f", count,price);
	printf("\n%2d \n %f ",count,price);
	printf("\n %10xxxx5.2%f \n",count,price);
	printf("\n %s", city);
	printf("\n%-10d \n %-15s ",count,city);
	getch();
}