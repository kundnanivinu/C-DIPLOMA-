//PROGRAM TO SCAN AND DISPLAY A STRUCTURE

#include<stdio.h>
#include<conio.h>

void main()
{
	struct book
	{
		char book_title[50];
		char book_author[30];
		int book_pages;
	}b;

	clrscr();

	printf("\n\n ENTEER THE RECORD...............");
	printf("\n\n ENTER THE TITLE OF BOOK:\t");
	gets(b.book_title);
	printf("\n\n ENTER THE NAME OF AUTHOR OF BOOK:\t");
	gets(b.book_author);
	printf("\n\n ENTER THE NUMBER OF PAGES IN BOOK:\t");
	scanf("%d",&b.book_pages);
	printf("\n\n----------------------------------------------------");
	printf("\n\n THE RECORD IS AS FOLLOWS..........");
	printf("\n\n TITLE OF BOOK : %s",b.book_title);
	printf("\n\n AUTHOR OF BOOK : %s",b.book_author);
	printf("\n\n PAGES OF BOOK : %d",b.book_pages);
	getch();
}
