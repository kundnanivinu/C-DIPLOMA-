//FIND WHETHER NUMBER IS PRIME

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,i,j;
	clrscr();
	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&n);
	j = sqrt(n);
	for(i=2;i<=j;i++)
	{
		if(n % i == 0)
		{
			printf("\n\n %d IS NOT A PRIME NUMBER",n);
			break;
		}
	}
	if(i > j)
		printf("\n\n %d IS A PRIME NUMBER",n);
	getch();
}
