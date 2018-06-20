//PROGRAM TO CONVERT STRING TO FLOAT

#include <stdlib.h>
#include <stdio.h>

void main()
{
   float f;
   char *str = "12345.67";
   clrscr();

   f = atof(str);
   printf("string = %s float = %f\n", str, f);
   //return 0;
   getch();
}