//DEMO OF ESCAPE SEQUENCES
/*
%% \\ \n \t
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("\"DOLLY\"");       //\" DISPLAYS (") IN OUTPUT
	printf("\n DOLLY \t DOLLY");
	printf("\n\n\n \\ DOLLY");
	printf("\n %%");          //TO PRINT % IN OUTPUT
	getch();
}