//PROGRAM TO FIND WHETHER THE NUMBER IS EVEN OR ODD
//USING ARGUMENTS BUT NO RETURN VALUE

#include<stdio.h>
#include<conio.h>

void even_odd(int);

void main()
{
	int number;
	clrscr();
	printf("\n\n ENTER THE NUMBER TO CHECK WHETHER IT IS EVEN OR ODD:\t");
	scanf("%d",&number);
	even_odd(number);
	getch();
}

void even_odd(int num)
{
	if(num % 2 == 0)
		printf("\n\n %d IS AN EVEN NUMBER",num);
	else
		printf("\n\n %d IS AN ODD NUMBER",num);
}
