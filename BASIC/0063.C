//PROGRAM TO FIND WHETHER THE GIVEN NUMBER IS EVEN OR ODD
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n\n ENTER A NUMBER:\t");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n\n %d IS AN EVEN NUMBER",n);
	}
	else
	{
		printf("\n\n %d IS AN ODD NUMBER",n);
	}
	getch();
}