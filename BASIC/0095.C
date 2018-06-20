//PROGRAM TO SEARCH WHETHER 'KEY' IS PRESENT IN ARRAY
//USING NO ARGUMENTS NO RETURN VALUE

#include<stdio.h>
#include<conio.h>

void key_search(void);

void main()
{
	clrscr();
	key_search();
	getch();
}

void key_search(void)
{
	int i,n,key;
	int array[100];
	printf("\n\n ENTER HOW MANY ELEMENTS ARE THERE:\t");
	scanf("%d",&n);
	printf("\n\n ENTER ELEMENTS OF ARRAY ONE BY ONE.......");
	for(i=0;i<n;i++)
	{
		printf("\n\n ENTER ELEMENT %d:\t",i+1);
		scanf("%d",&array[i]);
	}
	printf("\n\n ENTER THE VALUE TO BE SEARCHED IN ARRAY:\t");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(array[i] == key)
		{
			printf("\n\n %d IS ELEMENT NO. %d",key,i+1);
			break;
		}
	}
	if(i == n)
		printf("\n\n %d IS NOT FOUND IN THE ARRAY",key);
}
