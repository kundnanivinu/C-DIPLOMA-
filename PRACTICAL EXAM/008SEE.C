//PROGRAM TO CALCULATE SI AND CI

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float principal;
	int period;
	float rate;
	float amount;
	int comp_per;       //COMPUTATION PERIOD FOR CI
	float si;
	float ci;

	clrscr();

	printf("\n\n ENTER THE PRINCIPAL:\t");
	scanf("%f",&principal);
	printf("\n\n ENTER THE PERIOD:\t");
	scanf("%d",&period);
	printf("\n\n ENTER THE RATE OF INTEREST:\t");
	scanf("%f",&rate);
	printf("\n\n ENTER THE COMPUTATION PERIOD FOR CI:\t");
	scanf("%d",&comp_per);

	si = (principal * period * rate) / 100;
	ci = (principal * pow((1 + rate/comp_per*100),(period*comp_per))) - principal;

	printf("\n\n SIMPLE INTEREST IS %.2f",si);
	printf("\n\n COMPOUND INTEREST IS %.2f",ci);
	getch();
}