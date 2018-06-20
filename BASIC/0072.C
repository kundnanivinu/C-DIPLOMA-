//PROGRAM TO FIND SUM OF PRIME NUMBERS

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,i,from,sum=0,temp_n,temp_from;
	clrscr();
	printf("\n ENTER HOW MANY PRIME NUMBERS TO BE ADDED:\t");
	scanf("%d",&n);
	temp_n=n;
	printf("\n ENTER LOWER RANGE:\t");
	scanf("%d",&from);
	temp_from=from;
	for(;n>0;from++)
	{
		//1.for(i=2;i<n;i++)
		//2.for(i=2;i<=n/2;i++)
		for(i=2;i<=sqrt(from);i++)
		{
			if(from%i==0)
			{
				//printf("\n\n %d IS NOT A PRIME NUMBBER",n);
				break;
			}
		}
		//1.if(i==n)
		//2.if(i>=n/2)
		if(i>sqrt(from))
		{
			printf("\n\n %d ",from);
			sum+=from;
			n--;
		}
	}
	printf("\n\n SUMMATION OF %d PRIME NUMBERS FROM %d = %d",temp_n,temp_from,sum);
	getch();
}