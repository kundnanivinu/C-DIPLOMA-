//PROGRAM TO CONVERT STRING TO INTEGER

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
   int n;
   char *str; //= "12345.67";
   clrscr();

   printf("\n\nENTER THE STRING :\t");
   gets(str);
   n = atoi(str);
   printf("string = %s integer = %d\n", str, n);
   return 0;

}
