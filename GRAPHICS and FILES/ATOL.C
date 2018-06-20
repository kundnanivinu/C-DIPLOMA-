//PROGRAM TO CONVERT STRING INTO FLOAT

#include <stdlib.h>
#include <stdio.h>

void main(void)
{
   long l;
   char *lstr = "98765432";
   clrscr();

   l = atol(lstr);
   printf("string = %s integer = %ld\n", lstr, l);
   //return(0);
   getch();
}