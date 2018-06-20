//PROGRAM TO SWAP VALUES BY CALL BY VALUES

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	a=5,b=10;
	printf("\n\na=%d, b=%d",a,b);
	swap(a,b);
	printf("\n\na=%d, b=%d",a,b);
	getch();
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x=%d , y=%d",x,y);
}