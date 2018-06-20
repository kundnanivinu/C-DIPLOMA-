#include<stdio.h>
#include <conio.h>

int main(void)
{
   int i, j;

   clrscr();
   for (i=0; i<9; i++)
   {
       for (j=0; j<5; j++)
	  cprintf("\nVINU");
       cprintf("\r\n");
       textcolor(i+1);
       textbackground(i);
       getch();
   }

   return 0;
}