//REVERSE OF ARRAY USING POINTERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int *iptr;
	int array[100];
	int i,n;
	iptr = array;     //&array[0]
	clrscr();
	printf("\n ENTER HOW MANY ELEMENTS ARE THERE : \t");
	scanf("%d",&n);
	printf("\n\n ENTER ELEMENTS OF ARRAY ONE BY ONE..........");
	for(i=0;i<n;i++)
	{
		printf("\n\n ENTER VALUE %d : \t",i+1);
		scanf("%d",iptr+i);       //&iptr[i]
	}
	printf("\n\n ELEMENTS OF ARRAY IN REVERSE ORDER ARE AS FOLLOWS........");
	for(i=n-1;i>=0;i--)
	{
		printf("\n\n %d",*(iptr+i)); //iptr[i]
	}
	getch();
}