//PROGRAM TO DISPLAY ARITHMETIC OPERATION USING SWITCH
#include<stdio.h>
#include<conio.h>

void main()
{
	int ch;
	int a;
	int b;
	clrscr();
	printf("\n\n ENTER FIRST NUMBER: \t");
	scanf("%d",&a);
	printf("\n\nENTER SECOND NUMBER: \t");
	scanf("%d",&b);
	printf("\n\n 1.ADDITION");
	printf("\n\n 2.SUBTRACTION");
	printf("\n\n 3.MULTIPLICATION");
	printf("\n\n 4.DIVISION");
	printf("\n\n 5.MODULAR DIVISION");
	printf("\n\n ENTER YOUR CHOICE: \t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("\n\n ADDITION OF %d AND %d IS %d",a,b,a+b);
			break;
		}
		case 2:
		{
			printf("\n\n SUBTRACTION OF %d AND %d IS %d",a,b,a-b);
			break;
		}
		case 3:
		{
			printf("\n\n MULTIPLICATION OF %d AND %d IS %d",a,b,a*b);
			break;
		}
		case 4:
		{
			printf("\n\n DIVISION OF %d AND %d IS %d",a,b,a/b);
			break;
		}
		case 5:
		{
			printf("\n\n MODULAR DIVISION OF %d AND %d IS %d",a,b,a%b);
			break;
		}
		default:
		{
			printf("\n\n IMPROPER INPUT!!");
		}
	}
	getch();
}
