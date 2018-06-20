//PROGRAM TO FIND POWER OF A NUMBER

#include<stdio.h>
#include<conio.h>

void main()
{
	int number,power,count=1,result=1;
	clrscr();
	printf("\n ENTER THE NUMBER:\t");
	scanf("%d",&number);
	printf("\n ENTER THE POWER OF NUMBER:\t");
	scanf("%d",&power);
	for(;count<=power;)
	{
		result*=number;
		count++;
	}
	printf("\n\n %d TO POWER %d = %d",number,power,result);
	getch();
}