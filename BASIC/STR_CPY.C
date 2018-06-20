//PROGRAM TO COPY TWO STRINGS WITHOUT USING LIBRARY FUNCTION

#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[50];
	char str2[50];
	int i,j;

	clrscr();
	printf("\n\n ENTER THE FIRST STRING:\t");
	gets(str1);
	printf("\n\n ENTER THE SECOND STRING:\t");
	gets(str2);

	for(i = 0 ; str1[i] != '\0' ; j++)
	{
		str1[i] = str2[i];
		i++;
	}
	printf("\n\n AFTER COPYING \n\nSTR1 IS %s \n\nSTR2 IS %s",str1,str2);
	getch();
}