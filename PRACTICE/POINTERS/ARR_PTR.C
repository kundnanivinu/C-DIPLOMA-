//PROGRAM TO PRINT / ACCESS ARRAY ELEMENTS USING POINTERS OR POINTER TO ARRAY

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	int array[50];
	int *p_array;
	p_array = &array[0];

	clrscr();

	printf("\n\n ENTER HOW MANY ELEMENTS ARE THERE IN ARRAY:\t");
	scanf("%d",&n);
	printf("\n\n ENTER ELEMENTS OF ARRAY ONE BY ONE.........");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n\n ENTER ELEMENT %d:\t",i+1);
		scanf("%d",(p_array+i));
	}
	printf("\n\n ELEMENTS OF ARRAY ARE.........");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n\n ELEMENT %d:\t%d",i+1,*(p_array+i));
	}
	getch();
}
