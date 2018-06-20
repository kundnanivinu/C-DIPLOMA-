//PROGRAM TO FIND WHETHER THE NUMBER IS EVEN OR ODD
//USING NO ARGUMENTS BUT RETURN VALUE

#include<stdio.h>
#include<conio.h>

int even_odd(void);

void main()
{
	int result;
	extern int number;
	clrscr();
	result = even_odd();
	if(result == 0)
		printf("\n\n %d IS AN EVEN NUMBER",number);
	else
		printf("\n\n %d IS AN ODD NUMBER",number);
	getch();
}

int number;
int even_odd(void)
{
	printf("\n\n ENTER THE NUMBER TO CHECK WHETHER IT IS EVEN OR ODD:\t");
	scanf("%d",&number);
	if(number % 2 == 0)
		return 0;
	else
		return 1;
}
