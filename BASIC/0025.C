//PROGRAM TO DEMONSTRATE USE OF fflush(stdin)
#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	char name[30];
	clrscr();
	printf("\n\n\n\n ENTER YOUR NAME:\t");
	scanf("%s",name);           //READS ONLY ONE WORD
	printf("\n\n YOUR NAME IS %s",name);
	scanf("%s",name);	    //DISPLAYS UNDESIRED REMAINING OUTPUT IN INPUT STRING
	printf("\n\n YOUR NAME IS %s",name);
	printf("\n\n\n\n ENTER YOUR NAME:\t");
	scanf("%s",name);
	printf("\n\n YOUR NAME IS %s",name);
	fflush(stdin);	            //CLEARS INPUT STRING
	printf("\n\n YOUR NAME IS %s",name);
	printf("\n\n\n\n ENTER YOUR NAME:\t");
	scanf("%[^\n]",name);       //READS ENTIRE STRING TILL NEW LINE
	printf("\n\n YOUR NAME IS %s",name);
	printf("\n\n\n\n ENTER YOUR AGE:\t");
	scanf("%d",&age);
	printf("\n\n HELLO %s",name);
	printf("\n\n YOU ARE ");
	(age>18) ? printf("ADULT") : printf("MINOR");
	getch();
}