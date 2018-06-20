//STRING

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	char str[20];
	char temp;

	clrscr();

	printf("\n\n ENTER THE STRING : \t");
	gets(str);

	n = strlen(str);

	for(i = 0 ; i < n ; i++)
	{
		temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
	printf("\n\n STRING IS %s",str);
	getch();
}