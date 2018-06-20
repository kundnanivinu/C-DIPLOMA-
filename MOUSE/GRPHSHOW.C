#include <dos.h>
#include<stdio.h>
#include<conio.h>
#include <graphics.h>

union REGS in, out;
void showmouse_graphics ()
{
	in.x.ax = 1;
	int86 (0X33,&in,&out);
	getch ();
	closegraph ();
}

void detect_mouse ()
{
	in.x.ax = 0;
	int86 (0X33,&in,&out);   //invoke interrupt
	if (out.x.ax == 0)
		outtextxy(1,1,"Mouse Failed To Initialize");
	else
		outtextxy(1,1,"Mouse was Successfully Initialized");
}

int main ()
{
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "E:\\APPS\\TURBO_C\\TC\\BGI");
	detect_mouse ();
	showmouse_graphics ();
	return 0;
}
