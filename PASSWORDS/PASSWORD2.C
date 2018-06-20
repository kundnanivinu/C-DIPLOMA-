#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j;
	char password[] = "amenity",pass[32];
	char choice;
	clrscr();
	gotoxy(12,18);
	printf("\n***********************************************");
	for(i=0;i<20;i++)
	{
		printf("\n|                                             |");
	}
	printf("\n***********************************************");
	gotoxy(20,23);
	printf("\n\n|        ENTER THE PASSWORD:\t");
	fflush(stdin);
		for(j=0;pass[j]!='\r';j++)
		{
			choice = getch();
			pass[j+1] = '\0';
			pass[j] = choice;
			if(pass[j] != '\r')
				printf("*");
			if(pass[j] == '\r')
				break;
		}
		pass[j] = '\0';
		if(strcmp(pass,password) != 0)
			printf("\n\n|         YOU ENTERED WRONG PASSWORD");
		else
			printf("\n\n|              CORRECT PASSWORD");
	getch();
}
