/*PROGRAM TO PRINT
  1 2 3
  4 5 6 */
#include<stdio.h>
#include<conio.h>

void main()
{
	int rows;
	int columns;
	int k=1;
	clrscr();
	printf("\n\n THE PATTERN IS: \n\n");
	for(rows=1; rows<=2; rows++)
	{
		for(columns=1; columns<=3; columns++)
		{
			printf("\t %d", k);
			k++;
		}
		printf("\n\n");
	}
	getch();
}
