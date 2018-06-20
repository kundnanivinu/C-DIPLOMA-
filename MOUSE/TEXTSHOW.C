#include <dos.h>
#include<stdio.h>
#include<conio.h>

union REGS in, out;

void showmouse_text ()
{
	in.x.ax = 1;
	int86 (0X33,&in,&out);
}

void detect_mouse ()
{
	in.x.ax = 0;
	int86 (0X33,&in,&out);   //invoke interrupt
	if (out.x.ax == 0)
		printf ("\nMouse Failed To Initialize");
	else
		printf ("\nMouse was Successfully Initialized");
}

int main ()

{
	clrscr();
	detect_mouse ();
	showmouse_text ();
	getch ();
	return 0;
}
