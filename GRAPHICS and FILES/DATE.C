#include <dos.h>
#include <stdio.h>
#include<conio.h>

void main()
{
   struct date d;
   clrscr();
   getdate(&d);
   printf("The current year is: %d\n", d.da_year);
   printf("The current day is: %d\n", d.da_day);
   printf("The current month is: %d\n", d.da_mon);
   getch();
}
