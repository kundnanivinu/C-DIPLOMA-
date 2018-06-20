//PROGRAM TO SWAP VALUES USING BY CALL BY REFERENCE

#include<stdio.h>
#include<conio.h>

void swap(int*,int*);
void main()
{
int a,b;
a=5,b=10;
printf("\n\na=%d, b=%d",a,b);
swap(&a,&b)
printf("\n\na=%d, b=%d",a,b);
}
void swap(int*pa,int*pb)
{
	int temp;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}
