#include <dos.h>
#include<stdio.h>
#include<conio.h>
#include <graphics.h>

union REGS in, out;

void detectmouse ()
 {
  in.x.ax = 0;
  int86 (0X33,&in,&out);
  if (out.x.ax == 0)
  printf ("\nMouse Failed To Initialized");
  else
  printf ("\nMouse Successfully Initialized");
 }

void showmousegraphics ()
 {
   in.x.ax = 1;
   int86 (0X33,&in,&out);
    }
void hidemouse ()
 {
   in.x.ax = 2;
   int86 (0X33,&in,&out);
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
	 printf("\nLeft || X - %d  Y - %d", x, y);
       }
	/* if (out.x.bx == 2) printf( "Right");
	 delay (10); // Otherwise due to quick computer response 100s of words will get print
*/    }
}
int main ()
{
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "E:\\APPS\\TURBO_C\\TC\\BGI");
 detectmouse ();
 detect ();
 showmousegraphics ();
 getch ();

   closegraph ();

 return 0;
}

