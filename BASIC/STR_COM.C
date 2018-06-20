//PROGRAM TO COMPARE TWO STRINGS WITHOUT USING LIBRARY FUNCTION

#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[50];
	char str2[50];
	int i;

	clrscr();
	printf("\n\n ENTER THE FIRST STRING:\t");
	gets(str1);
	printf("\n\n ENTER THE SECOND STRING:\t");
	gets(str2);

	for(i = 0 ; str1[i] != '\0' || str2[i] != '\0'; i++)
	{
		if(str1[i] != str2[i])
		{
			printf("\n\n TW0 STRINGS ARE NOT EQUAL");
			break;
		}
	}
	if(str1[i] == '\0' && str2[i] == '\0')
	{
		printf("\n\n TW0 STRINGS ARE EQUAL");
	}
	getch();
}