//PROGRAM TO ACCESS DATA USING POINTER VARIABLE
//PROGRAM TO DEMONSTRATE ADDRESS OF(&) OPERATOR USED WITH POINTERS
//PROGRAM TO DEMONSTRATE VALUE AT ADDRESS(*) OPERATOR USED WITH POINTERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int r = 10;
	int s = 19;
	int *pr = &r;    //INITIALIZING POINTER VARIABLE AT THE TIME OF DECLARATION
	int *ps;
	ps = &s;         //INITIALIZING ps TO &s

	clrscr();

	printf("\n\n ADDRESS OF %d IS %u",*pr,pr);
	printf("\n\n ADDRESS OF %d IS %u",*ps,ps);
	printf("\n\n *pr = %d \t pr = %u",*pr,pr);
	printf("\n\n *ps = %d \t ps = %u",*ps,ps);
	printf("\n\n *(&r) = %d \t &r = %u",*(&r),&r);
	printf("\n\n *(&s) = %d \t &s = %u",*(&s),&s);
	getch();
}