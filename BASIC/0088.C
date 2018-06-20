#include<stdio.h>
#include<conio.h>

void swap(int *,int *);
void main()
{
	int a,b;
	clrscr();
	printf("\n ENTER THE VALUE OF a:\t");
	scanf("%d",&a);
	printf("\n ENTER THE VALUE OF b:\t");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\n\n IN MAIN FUNCTION: \n\n A=%d \t B=%d",a,b);
	getch();
}

void swap(int *pa,int *pb)
{
	int temp;
	temp = *pa;
	*pa=*pb;
	*pb=temp;
}