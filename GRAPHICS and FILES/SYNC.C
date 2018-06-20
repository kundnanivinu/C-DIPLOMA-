//PROGRAM FOR DETERMINING WHETHER THE GIVEN STRINGS ARE SYNCHRONOUS OR NOT

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100][20];
	char temp[20];
	int i,j,k,n,l,l1,cnt;

	clrscr();

	printf("\n\n ENTER HOW MANY STRINGS ARE THERE : \t");
	scanf("%d",&n);
	fflush(stdin);
	printf("\n\n ENTER THE STRINGS ONE BY ONE...........\n");

	for(i = 0 ; i < n ; i++)
	{
		printf("\n ENTER STRING %d : \t",i+1);
		gets(str[i]);
	}
	for(j = 0 ; j < n ; j++)
	{
		cnt = 0;
		for(k = 0 ; k < n ; k++)
		{
			l = strlen(str[k]);
			if(str[j] == str[k])
				continue;
			else
			{
				if(str[j][0] == str[k][l-1])
					continue;
				else
					cnt++;
			}
		}
		if(cnt == n-1)
		{
			strcpy(temp,str[0]);
			strcpy(str[0],str[j]);
			strcpy(str[j],temp);
			break;
		}
	}
	for(j = 0 ; j < n-1 ; j++)
	{
		l1 = strlen(str[j]);
		for(k = 0 ; k < n ; k++)
		{
			if(str[j] == str[k])
			{
				continue;
			}
			else
			{
				if(str[j][l1-1] == str[k][0])
				{
					strcpy(temp,str[j+1]);
					strcpy(str[j+1],str[k]);
					strcpy(str[k],temp);
				}
			}
		}
	}
	for(i = 0 ; i < n-1 ; i++)
	{
		l1 = strlen(str[i]);
		if(str[i][l1-1] == str[i+1][0])
		{
			continue;
		}
		else
		{
			break;
		}
	}
	if(i == n-1)
	{
		printf("\n SYNCHRONOUS");
		for(i = 0 ; i < n ; i++)
		{
			printf("\n\n %s",str[i]);
		}
	}
	else
	{
		printf("\n ASYNCHRONOUS");
	}
	getch();
}