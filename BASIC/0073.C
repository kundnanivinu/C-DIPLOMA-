//PROGRAM TO PRINT FIBONACCI SERIES
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	int a;
	int b;
	int c;
	int n;
	clrscr();
	printf("\n ENTER THE NUMBER OF TERMS TO BE PRINTED:\t");
	scanf("%d",&n);
	printf("\n\n FIBONACCI SERIES : \n\n\n\n");
	for(a=0,b=1,i=0;i<n;i++)
	{
		if(i<2)
			printf("%4d",i);
		else
			printf("%4d",c);
		c=a+b;
		b=a;
		a=c;
	}
	getch();
}
