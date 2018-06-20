//PROGRAM TO COUNT FROM 7 TO -5
#include<stdio.h>
#include<conio.h>
#define upper_limit 7
#define lower_limit -5

void main()
{
	int i,count=0;
	clrscr();
	for(i=upper_limit;i>=lower_limit;i--)
	{
		count++;
	}
	printf("\n COUNT OF NUMBERS FROM %d TO %d = %d",upper_limit,lower_limit,count);
	getch();
}