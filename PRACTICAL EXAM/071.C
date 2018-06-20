//ARRAY OF POINTERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int *arr[5];
	int l=10,m=20,n=30,o=40,p=50;
	int i;
	clrscr();
	arr[0]=&l;
	arr[1]=&m;
	arr[2]=&n;
	arr[3]=&o;
	arr[4]=&p;
	for(i=0;i<5;i++)
		printf("%d\t",*(arr[i]));
	getch();
}