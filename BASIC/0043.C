//PROGRAM TO CALCULATE TOTAL SALES AND COMMISSION
#include<stdio.h>
#include<conio.h>

void main()
{
	int qty;          //QTY=QUANTITY OF GOODS SOLD
	float cost;       //COST=PRICE OF PER PIECE
	float to_sal;     //TO_SAL=TOTAL SALES
	float comm;       //COMM=COMISSION
	clrscr();
	printf("\n\n ENTER THE QUANTITY OF GOODS SOLD: \t");
	scanf("%d",&qty);
	fflush(stdin);
	printf("\n\n ENTER THE COST OF PER PIECE:\t");
	scanf("%f",&cost);
	to_sal=qty*cost;
	comm=(7.0/100)*to_sal;
	printf("\n TOTAL SALES = RS. %.2f",to_sal);
	printf("\n COMMISSION = RS. %.2f",comm);
	getch();
}
