//PROGRAM TO FIND WHETHER THE ENTERED CHARACTER IS AN ALPHABET OR NOT
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n\n ENTER A CHARACTER:\t");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\n\n %c IS AN ALPHABET",ch);
	}
	else
	{
		printf("\n\n %c IS NOT AN ALPHABET",ch);
	}
	getch();
}