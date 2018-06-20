//PROGRAM TO PRINT MULTIPLE OF 7 ALONG WITH ITS SQUARE
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	printf("\n MULTIPLE OF 7  \t  SQUARE \n\n\n\n");
	for(i=1;i<100;i++)
	{
		if(i%7==0)
		 printf("\n\n\n %d \t\t\t %d",i,i*i);
	}
	getch();
}