//PROGRAM TO USE COMPOUND ASSIGNMENT
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=2,b=3,c=4,d;
	clrscr();
	a=++b - c--;
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	c=a++ + ++b;
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	a+=(--b);
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	b= a==c;
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	a=c++ || --b;
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	c=!a && --b;
	printf("\n\n A=%d B=%d C=%d",a,b,c);
	d=--a && c++ || --b;
	printf("\n\n A=%d B=%d C=%d D=%d",a,b,c,d);
	a=++b && --c || d++;
	printf("\n\n A=%d B=%d C=%d D=%d",a,b,c,d);
	c=d++ || c-- && b++;
	printf("\n\n A=%d B=%d C=%d D=%d",a,b,c,d);
	b=a++ && c++ && ++d;
	b++;
	printf("\n\n A=%d B=%d C=%d D=%d",a,b,c,d);
	getch();
}