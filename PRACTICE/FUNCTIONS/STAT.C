//PROGRAM FOR STATIC VARIABLE

#include<stdio.h>
#include<conio.h>

void stat(void);
void main()
{
	int i = 10;
	clrscr();
	printf("\n\n IN MAIN........");
	printf("\n\n VALUE OF i IS %d",i);
	stat();
	printf("\n\n IN MAIN........");
	printf("\n\n AFTER RETURNING FROM STAT........");
	printf("\n\n VALUE OF i IS %d",i);
	stat();
	printf("\n\n IN MAIN........");
	printf("\n\n AFTER RETURNING FROM STAT........");
	printf("\n\n VALUE OF i IS %d",i);
	getch();
}
void stat(void)
{
	static int i;
	i += 20;
	printf("\n\n IN STAT........");
	printf("\n\n VALUE OF i IS %d",i);
}