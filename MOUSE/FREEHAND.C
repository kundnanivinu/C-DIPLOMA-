#include <graphics.h>
#include<stdio.h>
#include<conio.h>
#include <dos.h>

union REGS in,out;

void detect_mouse ()
{
	in.x.ax = 0;
	int86 (0X33,&in,&out);   //invoke interrupt
	if (out.x.ax == 0)
		printf ("\nMouse Failed To Initialize");
	else
		printf ("\nMouse was Successfully Initialized");
}

void show_mouse()
{
	in.x.ax=1;
	int86(0x33,&in,&out);
}

void hide_mouse()
{
	in.x.ax=2;
	int86(0x33,&in,&out);
}
void get_mouse_pos(int *x,int *y,int *button)
{
	in.x.ax=3;
	int86(0x33,&in,&out);
	*x=out.x.cx;
	*y=out.x.dx;
	*button=out.x.bx&1;
}
void main()
{
	int gdriver = DETECT, gmode, errorcode,button,x1,y1,x2,y2;
	initgraph(&gdriver, &gmode, "E:\\APPS\\TURBO_C\\TC\\BGI");
	clrscr();
	detect_mouse ();
	outtextxy(230,400,"Press any key to exit....");
	while(!kbhit())
	{
		show_mouse();
		get_mouse_pos(&x1,&y1,&button);
		x2=x1;
		y2=y1;
		while(button==1)
		{
			hide_mouse();
			line(x1,y1,x2,y2) ;
			x1=x2;
			y1=y2;
			get_mouse_pos(&x2,&y2,&button);
		}
	}
	getch();
}
