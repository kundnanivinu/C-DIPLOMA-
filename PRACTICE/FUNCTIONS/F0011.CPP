#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	int cnt1=0,cnt2=0,cnt3=0,no=0;
	for(i=1;i<=10;i++)
	{
		printf("\nENTER VALUE %d : \t",i);
		scanf("%d",&no);
		if(no==0)
		{
			cnt1++;
		}
		if(no>0)
		{
			cnt2++;
		}
		if(no<0)
		{
			cnt3++;
		}
	}
		printf("\n\nTOTAL POSITIVE NUMBERS ARE :%d",cnt2);
		printf("\n\nTOTAL NEGATIVE NUMBERS ARE :%d",cnt3);
		printf("\n\nTOTAL ZEROS ARE :%d",cnt1);
}

