//PROGRAM TO FIND DISCOUNT
#include<stdio.h>
#include<conio.h>

void main()
{
	float discount=0.0;
	float purchase;
	clrscr();
	printf("\n\n ENTER THE PRICE OF GOODS PURCHASED: \t");
	scanf("%f",&purchase);
	if(purchase>=1000.00)
	{
		discount = 0.1 * purchase;
		printf("\n\n DISCOUNT = %.2f",discount);
	}
	getch();
}
