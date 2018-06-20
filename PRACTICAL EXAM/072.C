//FIBONACCI SERIES

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,i;
	clrscr();
	for(a=0,b=1,i=0;i<=10;i++)
	{
		if(i<2)
			printf("%d\t",i);
		else
			printf("%d\t",c);
		c=a+b;
		b=a;
		a=c;
	}
	getch();
}