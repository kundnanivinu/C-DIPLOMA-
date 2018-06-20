//PROGRAM TO DEMONSTRATE USE OF -> OPERATOR ( MEMBER SELECTION / ARROW )

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	float temp;
	struct magazine
	{
		char name[100];
		char publisher[30];
		int pages;
		float cost;
	}m,*ptr;
	ptr = &m;

	clrscr();

	printf("\n ENTER NAME OF MAGAZINE:\t");
	gets(ptr -> name);
	printf("\n ENTER PUBLISHER:\t");
	gets(ptr -> publisher);
	printf("\n ENTER PAGES:\t");
	scanf("%d",&ptr->pages);
	printf("\n ENTER COST:\t");
	scanf("%f",&temp);
	ptr->cost = temp;
	printf("\n\n THE RECORD IS AS FOLLOWS..........");
	printf("\n NAME OF MAGAZINE:%s",ptr->name);
	printf("\n PUBLISHER:%s",ptr->publisher);
	printf("\n PAGES:%d",ptr->pages);
	printf("\n COST:%.2f",ptr->cost);
	getch();
}
