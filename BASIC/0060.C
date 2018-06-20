//PROGRAM TO FIND SCHOLARSHIP
#include<stdio.h>
#include<conio.h>

void main()
{
	float fee,per;
	clrscr();
	printf("\n\n ENTER TOTAL FEE:\t");
	scanf("%f",&fee);
	printf("\n\n ENTER YOUR PERCENTAGE:\t");
	scanf("%f",&per);
	if(per>=90)
	{
		fee=fee*0.8;
	}

	printf("\n\n YOUR TOTAL FEE IS %f",fee);
	getch();
}