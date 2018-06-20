//PROGRAM TO CALCULATE LENGTH OF STRING WITHOUT USING LIBRARY FUNCTION

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[50];
	int i;

	clrscr();
	printf("\n\n ENTER THE STRING TO CALCULATE ITS LENGTH:\t");
	gets(str);

	//for(i=0;str[i]!=NULL;i++);

	i = 0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("\n\n LENGTH OF STRING IS %d",i);
	getch();
}