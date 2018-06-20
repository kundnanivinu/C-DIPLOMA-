//PROGRAM TO FIND NET SALARY
#include<stdio.h>
#include<conio.h>

void main()
{
	float basic;             //BASIC SALARY
	float hra;               //HOUSING RENT ALLOWANCE
	float da;		 //DEARNESS ALLOWANCE
	float ta;		 //TRAVELLING ALLOWANCE
	float g_sal;		 //GROSS SALARY
	float net_sal;		 //NET SALARY
	int pt = 200;		 //PROFESSIONAL TAX
	clrscr();
	printf("\n\n ENTER BASIC SALARY: \t");
	scanf("%f",&basic);
	hra = (50 * basic) / 100;
	da = (25 * basic) / 100;
	ta = (5 * basic) / 100;
	g_sal = basic + hra + da + ta;
	net_sal = g_sal - pt;
	printf("\n BASIC = %f",basic);
	printf("\n HRA = %f",hra);
	printf("\n DA = %f",da);
	printf("\n TA = %f",ta);
	printf("\n GROSS SALARY = %f",g_sal);
	printf("\n NET SALARY = %f",net_sal);



	getch();
}
