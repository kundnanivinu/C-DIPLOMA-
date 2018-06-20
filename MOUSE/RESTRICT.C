#include <dos.h>
#include <graphics.h>
union REGS in, out;

void restrict (int x1,int y1,int x2, int y2)
{
	in.x.ax = 7;
	in.x.cx = x1;
	in.x.dx = x2;
	int86 (0X33,&in,&out);
	in.x.ax = 8;
	in.x.cx = y1;
	in.x.dx = y2;
	int86 (0X33,&in,&out);
}

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

void detect ()
{
	while (!kbhit () )
	{
		int x,y;
		in.x.ax = 3;
		int86 (0X33,&in,&out);
		if (out.x.bx == 1)
		{
			x = out.x.cx;
			y = out.x.dx;
			printf ("\nLeft || X - %d  Y - %d", x, y);
		}
		else if(out.x.bx == 2)
		{
			x = out.x.cx;
			y = out.x.dx;
			printf ("\nRight || X - %d  Y - %d", x, y);
		}
		delay (200); // Otherwise due to quick computer response 100s of words will get print
	}
}

void showmouse_text ()
{
	in.x.ax = 1;
	int86 (0X33,&in,&out);
}

int main ()
{
	detect_mouse ();
	showmouse_text ();
	restrict (100,100,500,500); // Change values here to create different mouse movement space.
	detect ();
	hide_mouse ();
	getch ();
	return 0;
}
