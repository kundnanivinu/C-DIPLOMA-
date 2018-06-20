#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;

	clrscr();

	printf("\n\nENTER FIRST NUMBER : \t");
	scanf("%d",&a);
	printf("\n\nENTER SECOND NUMBER : \t");
	scanf("%d",&b);
	if(a>b)
	{
		for(c=0;a>c+b;c++)
			;
		printf("\n\nTHE DIFFERENCE BETWEEN THE TWO NUMBERS IS %d",c);
	}
	else
	{
		for(c=0;a!=(c+b);c++)
			;
		printf("\n\nTHE DIFFERENCE BETWEEN THE TWO NUMBERS IS %d",c);
	}

	getch();
}