//PROGRAM TO REVERSE

#include<stdio.h>
#include<conio.h>


void main()
{
	int i,j,n,rev_1=0,rev_2=0,rev_3=0;
	int b=0,c=0,d=0;
	int num;
	long int temp;
	char array[10000],*str;

	clrscr();
	printf("\n\nENTER THE NUMBER OF CASES : \t");
	scanf("%d",&n);

	printf("\n\nENTER THE NUMBERS....\n\n ");
	for(i=0; i< n*2 ; i++)
	{

			scanf("%d",&array[i]);
			/*if(array[i] = ' ')
			{
				break;
			}*/


			*str = array[i];
			temp = atol(str);
		do
		{
			b = temp % 10;
			rev_1 = rev_1 * 10 + b;
			temp = temp / 10;
		}while(temp != 0);
		for(i=0;array[i] != ' ';i++)
		{

			array[i] = getche();
		}
			*str = array[i];
			temp = atol(str);
		do
		{
			b = temp % 10;
			rev_2 = rev_2 * 10 + b;
			temp = temp / 10;
		}while(temp != 0);
		printf("\n");
		num = rev_1 + rev_2;

		do
		{
			d = num % 10;
			rev_3 = rev_3 * 10 + d;
			d = num / 10;
		}while(num != 0);

		printf("\n %d",rev_3);


	}
	getch();
}



