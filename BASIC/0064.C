//PROGRAM FOR TRIANGLE
#include<stdio.h>
#include<conio.h>

void main()
{
	float l1,l2,l3,area,peri,s;
	clrscr();
	printf("\n\n ENTER YOUR LENGTH OF SIDE1:\t");
	scanf("%f",&l1);
	printf("\n\n ENTER YOUR LENGTH OF SIDE2:\t");
	scanf("%f",&l2);
	printf("\n\n ENTER YOUR LENGTH OF SIDE3:\t");
	scanf("%f",&l3);
	if(l1+l2>l3 && l2+l3>l1 && l3+l1>l2)
	{
		printf("\n\n TRIANGLE IS CONSTRUCTABLE");
		peri=l1+l2+l3;
		s=peri/2;
		area=sqrt(s*(s-l1)*(s-l2)*(s-l3));
		if(peri>area)
		{
			printf("\n\n PERIMETER IS MORE THAN AREA");
		}
		else
		{
			printf("\n\n AREA IS MORE THAN PERIMETER");
		}
	}
	else
	{
		printf("\n\n TRIANGLE IS NOT CONSTRUCTABLE");
	}
	getch();
}