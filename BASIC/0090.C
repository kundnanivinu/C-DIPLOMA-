//PROGRAM TO CONCATENATE TWO STRINGS WITHOUT USING LIBRARY FUNCTION

#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[50];
	char str2[50];
	char str3[100];
	int i,j;

	clrscr();
	printf("\n\n ENTER THE FIRST STRING:\t");
	gets(str1);
	printf("\n\n ENTER THE SECOND STRING:\t");
	gets(str2);

	for(i = 0 ; str1[i] != '\0' ; i++)
	{
		str3[i] = str1[i];
	}
	for(j = 0 ; str2[j] != '\0' ; j++)
	{
		str3[i] = str2[j];
		i++;
	}
	str3[i] = '\0';
	printf("\n\n CONCATENATION OF TWO STRINGS IS %s",str3);
	getch();
}