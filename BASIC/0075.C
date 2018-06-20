//PROGRAM TO PRINT MULTIPLE OF 10 AND ITS SQUARE AND THEIR SUM
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	int n;
	int count;
	clrscr();
	printf("\n ENTER HOW MANY TERMS TO BE PRINTED:\t");
	scanf("%d",&n);
	//for(i=10,count=1;count<=((n>10)?10:n);i+=10,count++)
	for(i=10,count=1;count<=n && count<=10;i+=10,count++)
	{
		printf("\n\n\n\n SQUARE OF %d = %d",i,i*i);
		printf("\n\n THEIR SUM : %d", i+(i*i));
	}
	getch();
}
