/*CONVERSION OF FAHRENHEIT TEMPERATURE INTO CELSIUS TEMPERATURE*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float ftemp,ctemp;
	clrscr();
	printf("\n ENTER THE FAHRENHEIT TEMPERATURE:\t");
	scanf("%f",&ftemp);
	ctemp=(ftemp-32)/((float)9/5);
	printf("\n\n THE CELSIUS TEMPERATURE IS %f",ctemp);
	getch();
}