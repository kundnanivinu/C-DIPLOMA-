#include <dos.h>
#include <graphics.h>
union REGS in, out;
void detect ()
{
	int button;
	while (!kbhit () )
	{
		in.x.ax = 3;
		int86 (0X33,&in,&out);
		button = out.x.bx;
		switch(button)
		{
			case 1:
				printf("\nleft button pressed\n");
			break;
			case 2:
				printf("\nright button pressed\n");
			break;
			case 4:
				printf("\nmiddle button pressed\n");
			break;
			case 3:
				printf("\nleft and right button pressed\n");
			break;
			case 5:
				printf("\nleft and middle button pressed\n");
			break;
			case 6:
				printf("\nright and middle button pressed\n");
			break;
			case 7:
				printf("\nall the three buttons pressed\n");
			break;
			default:
				printf("\nNo button pressed\n");
		}
		delay (200); // Otherwise due to quick computer response 100s of words will get print
	}
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

void hide_mouse ()
{
	printf("\n\nMOUSE IS THERE");
	getch();
	in.x.ax = 2;
	int86 (0X33,&in,&out);
	printf("\n\nMOUSE IS HIDDEN");
}

int main ()
{
	detect_mouse ();
	showmouse_text ();
	detect ();
	hide_mouse ();
	getch ();
	return 0;
}
