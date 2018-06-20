//PROGRAM TO USE BUILT-IN STRING FUNCTIONS

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[50];
	char str2[50];

	clrscr();

	printf("ENTER FIRST STRING:\t");
	gets(str1);
	printf("\nENTER SECOND STRING:\t");
	gets(str2);

	printf("\n-----------------------------------------------------");
	printf("\nUSING strlen() FUNCTION");
	printf("\nLENGTH OF STRING1 i.e %s IS %d",str1,strlen(str1));
	printf("\nLENGTH OF STRING2 i.e %s IS %d",str2,strlen(str2));

	printf("\n-----------------------------------------------------");
	printf("\nUSING strcmp() FUNCTION");
	if(strcmp(str1,str2) == 0)
		printf("\nTHE STRINGS ARE EQUAL");
	else
		printf("\nTHE STRINGS ARE NOT EQUAL");

       printf("\n-----------------------------------------------------");
       printf("\nUSING strcat() FUNCTION");
       printf("\nBEFORE CONCATENATION.......................");
       printf("\nSTRING1 IS %s",str1);
       printf("\nSTRING2 IS %s",str1);
       strcat(str1,str2);
       printf("\nAFTER CONCATENATION.......................");
       printf("\nSTRING1 IS %s",str1);
       printf("\nSTRING2 IS %s",str1);

       printf("\n-----------------------------------------------------");
       printf("\nUSING strcpy() FUNCTION");
       printf("\nBEFORE COPYING.......................");
       printf("\nSTRING1 IS %s",str1);
       printf("\nSTRING2 IS %s",str1);
       strcpy(str1,str2);
       printf("\nAFTER COPYING.......................");
       printf("\nSTRING1 IS %s",str1);
       printf("\nSTRING2 IS %s",str1);

       printf("\n-----------------------------------------------------");
       printf("\nUSING strrev() FUNCTION");
       printf("\nORIGINAL STRING.......................");
       printf("\n%s",str1);
       printf("\nREVERSED STRING.......................");
       printf("\n%s",strrev(str1));

       getch();
}