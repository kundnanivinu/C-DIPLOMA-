#include<stdio.h>
#include<conio.h>
#include<math.h>


void main()
{
	long int no;
	int d[5],i,j;

	clrscr();

	printf("\n\nENTER A FIVE DIGIT NUMBER : \t");

	scanf("%ld",&no);

	d[1] = no/10000 - no/100000 * 10;
	d[2] = no/1000 - no/10000 * 10;
	d[3] = no/100 - no/1000 * 10;
	d[4] = no/10 - no/100 * 10;
	d[5] = no - no/10 * 10;
	for(i=1;i>=5;i++)
	{
		d[i]+=1;
		if(d[i] == 9)
			d[i-1]+=1;
		printf("%d",d[i]);
	}
	getch();
}