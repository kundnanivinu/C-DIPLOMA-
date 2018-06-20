//SUM OF ARRAY ELEMENTS USING POINTERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int array[100];
	int *iptr;
	int i,n,sum=0;
	iptr = array;
	clrscr();
	printf("\n\n ENTER HOW MANY ELEMENTS ARE THERE:\t");
	scanf("%d",&n);
	printf("\n\n ENTER ELEMENTS OF ARRAY ONE BY ONE........");
	for(i=0;i<n;i++)
	{
		printf("\n\n ENTER ELEMENT %d:\t",i+1);
		scanf("%d",iptr+i);
		sum += *(iptr+i);
	}
	printf("\n\n SUM OF ELEMENTS OF ARRAY IS %d",sum);
	getch();
}