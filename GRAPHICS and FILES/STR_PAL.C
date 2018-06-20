//PALINDROME STRINGS
/*deified
rotator
repaper
testset
racecar
redivider
detartrated
tattarrattat
Wassamassaw*/



#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n,i;
	char str[20],str1[20];
	char temp;

	clrscr();

	printf("\n\n ENTER THE STRING : \t");
	gets(str);
	strcpy(str1,str);

	n = strlen(str);

	for(i = 0 ; i < n/2 ; i++)
	{
		temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
	if(stricmp(str1,str) == 0)
		printf("\n\n %s IS PALINDROME",str1);
	else
		printf("\n\n %s IS NOT A PALINDROME",str1);
	getch();
}