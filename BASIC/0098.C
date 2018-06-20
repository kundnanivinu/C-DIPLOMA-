//PROGRAM TO SEARCH WHETHER 'KEY' IS PRESENT IN ARRAY
//USING ARGUMENTS AND RETURN VALUE

#include<stdio.h>
#include<conio.h>

int key_search(int*,int,int);

void main()
{
	int i,n,key,result;
	int array[100];
	clrscr();
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
	result = key_search(array,key,n);
	if(result > 0)
		printf("\n\n %d IS ELEMENT NO. %d",key,result);
	else
		printf("\n\n %d IS NOT FOUND IN THE ARRAY",key);
	getch();
}

int key_search(int *array,int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(array[i] == key)
		{
			return i+1;
		}
	}
	if(i == n)
		return -1;
}
