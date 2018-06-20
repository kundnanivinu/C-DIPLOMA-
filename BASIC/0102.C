//PROGRAM TO FIND WHETHER THE NUMBER IS EVEN OR ODD
//USING ARGUMENTS AND RETURN VALUE

#include<stdio.h>
#include<conio.h>

int even_odd(int);

void main()
{
	int number;
	int result;
	clrscr();
	printf("\n\n ENTER THE NUMBER TO CHECK WHETHER IT IS EVEN OR ODD:\t");
	scanf("%d",&number);
	result = even_odd(number);
	if(result == 0)
		printf("\n\n %d IS AN EVEN NUMBER",number);
	else
		printf("\n\n %d IS AN ODD NUMBER",number);
	getch();
}

int even_odd(int num)
{

	if(num % 2 == 0)
		return 0;
	else
		return 1;
}
