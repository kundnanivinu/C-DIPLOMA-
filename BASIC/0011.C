/*CONVERSION OF CELSIUS TEMPERATURE INTO FAHRENHEIT TEMPERATURE*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float ftemp,ctemp;
	clrscr();
	printf("\n ENTER THE CELSIUS TEMPERATURE:\t");
	scanf("%f",&ctemp);
	ftemp=((float)9/5)*ctemp+32;
	printf("\n\n THE FAHRENHEIT TEMPERATURE IS %f",ftemp);
	getch();
}