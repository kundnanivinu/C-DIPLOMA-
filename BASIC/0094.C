//PROGRAM TO PRINT REVERSE OF ENTERED STRING WITHOUT USING LIBRARY FUNCTION

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[50];
	int i,j;

	clrscr();
	printf("\n\n ENTER THE STRING:\t");
	gets(str);

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	printf("\n\n REVERSE OF STRING IS ");

	for(j = i ; j >= 0 ; j--)
	{
		printf("%c",str[j]);
	}
	getch();
}