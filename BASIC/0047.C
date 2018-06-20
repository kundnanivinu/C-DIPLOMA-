//PROGRAM TO SEE ASCII VALUES
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	int temp;
	clrscr();
	printf("\n\n ENTER THE VALUE OF A: \t");
	scanf("%d",&a);
	printf("\n\n ENTER THE VALUE OF B: \t");
	scanf("%d",&b);
	printf("\n\n INTERCHANGING USING THIRD VARIABLE: \t");
	temp = a;
	a = b;
	b = temp;
	printf("\n\n A = %d",a);
	printf("\n\n B = %d",b);
	printf("\n\n INTERCHANGING USING * AND /: \t");
	a = a * b;
	b = a / b;
	a = a / b;
	printf("\n\n A = %d",a);
	printf("\n\n B = %d",b);
	printf("\n\n INTERCHANGING USING + AND -: \t");
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n\n A = %d",a);
	printf("\n\n B = %d",b);
	getch();
}
