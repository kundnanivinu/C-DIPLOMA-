//PROGRAM TO FIND SIMPLE INTEREST AND COMPOUND INTEREST
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n;
	float p,r,si,ci;
	clrscr();
	printf("\n\n ENTER PRINCIPAL:\t");
	scanf("%f",&p);
	printf("\n\n ENTER RATE OF INTEREST:\t");
	scanf("%f",&r);
	printf("\n\n ENTER NUMBER OF YEARS:\t");
	scanf("%d",&n);
	si=(p*n*r)/100;
	ci=p*pow((1+r/100),n)-p;
	printf("\n\n SIMPLE INTEREST IS :%.2f",si);
	printf("\n\n COMPOUND INTEREST IS :%.2f",ci);
	getch();
}