//PROGRAM TO FIND ELECTRIC BILL
#include<stdio.h>
#include<conio.h>

void main()
{
	int cust_no;
	int units,charge;
	clrscr();
	printf("\n\n ENTER YOUR CUSTOMER NUMBER: \t");
	scanf("%d",&cust_no);
	printf("\n\n ENTER UNITS CONSUMED: \t");
	scanf("%d",&units);
	if(units<0)
		printf("\n\n IMPROPER INPUT!!");
	else if(units <= 200)
	{
		charge = 0.5 * units;
	}if(units <= 200)
	{
		charge = 0.5 * units;
	}
	else if(units <= 400)
	{
		charge = 100 + 0.65*(units - 200);
	}
	else if(units<=600)
	{
		charge = 230 + 0.8 * (units - 400);
	}
	else
	{
		charge = 390 + (units - 600);
	}
	printf("\n\n CUSTOMER_MUMBER : %d CHARGE : %d",cust_no,charge);
	getch();
}