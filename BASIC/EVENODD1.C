//PROGRAM TO FIND WHETHER THE NUMBER IS EVEN OR ODD
//USING NO ARGUMENTS NO RETURN VALUE

#include<stdio.h>
#include<conio.h>

void even_odd(void);

void main()
{
	clrscr();
	even_odd();
	getch();
}

void even_odd(void)
{
	int number;
	printf("\n\n ENTER THE NUMBER TO CHECK WHETHER IT IS EVEN OR ODD:\t");
	scanf("%d",&number);
	if(number % 2 == 0)
		printf("\n\n %d IS AN EVEN NUMBER",number);
	else
		printf("\n\n %d IS AN ODD NUMBER",number);
}
