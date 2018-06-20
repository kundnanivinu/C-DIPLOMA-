//PROGRAM TO SEARCH WHETHER 'KEY' IS PRESENT IN ARRAY
//USING NO ARGUMENTS AND RETURN VALUE

#include<stdio.h>
#include<conio.h>

int key_search(void);

void main()
{
	int result;
	extern int key;
	clrscr();
	result = key_search();
	if(result > 0)
		printf("\n\n %d IS ELEMENT NO. %d",key,result);
	else
		printf("\n\n %d IS NOT FOUND IN THE ARRAY",key);
	getch();
}

int key;
int key_search(void)
{
	int i,n;
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
			return i+1;
	}
	if(i == n)
		return -1;
}
