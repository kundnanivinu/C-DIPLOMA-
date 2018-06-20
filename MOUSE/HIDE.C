#include <dos.h>
#include<stdio.h>
#include<conio.h>

union REGS in, out;

void hide_mouse ()
{
	printf("\n\nMOUSE IS THERE");
	getch();
	in.x.ax = 2;
	int86 (0X33,&in,&out);
	printf("\n\nMOUSE IS HIDDEN");
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

void showmouse_text ()
{
	in.x.ax = 1;
	int86 (0X33,&in,&out);
}

int main ()

{
	clrscr();
	detect_mouse ();
	showmouse_text();
	hide_mouse ();
	getch ();
	return 0;
}

