//PROGRAM FOR GLOBAL AND LOCAL VARIABLES

#include<stdio.h>
#include<conio.h>

void func();
int global=10;

void main()
{
	extern int external;
	int local = 8;
	clrscr();
	printf("\n\n IN MAIN.............");
	printf("\n\n VALUE OF local IS : %d",local);
	func();
	printf("\n\n IN MAIN.............");
	printf("\n\n AFTER RETURNING FROM FUNCTION.............");
	printf("\n\n VALUE OF external IS : %d",external);
	getch();
}
int external = 81;
void func()
{
	int local = 18;
	int global = 100;
	printf("\n\n IN FUNC.............");
	printf("\n\n VALUE OF local IS : %d",local);
	printf("\n\n VALUE OF global IN FUNC IS : %d",global);
	printf("\n\n VALUE OF GLOBAL VARIABLE global IS : %d",::global);
	printf("\n\n VALUE OF external IS : %d",external);
}
