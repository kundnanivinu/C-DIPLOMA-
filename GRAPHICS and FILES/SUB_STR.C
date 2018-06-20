//PROGRAM

#include<stdio.h>
#include<conio.h>
#include<string.h>

int str(char *,char *);

void main()
{
	char str1[20],str2[100],str3[20];
	int n,i;

	clrscr();

	printf("\n\n ENTER THE FIRST STRING : \t");
	gets(str1);
	printf("\n\n ENTER THE SECOND STRING : \t");
	gets(str2);
	printf("\n\n ENTER THE THIRD STRING : \t");
	gets(str3);
	n = str(&str1,&str3);
	printf("\n\n VALUE RETURNED = %d",n);
	if(n!=0)
	{
		for(i = 0 ; i < strlen(str2) ; i++)
		{
			str3[n+i-1] = str2[i];
		}
		printf("\n\n THIRD STRING IS %s",str3);
	}
	getch();
}

int str(char *str1,char *str3)
{
	int i,j;
	if(strlen(str1) < strlen(str3))
	{
		for(i=0;i<=strlen(str3);i++)
		{
			if(str1[0] == str3[i])
			{
				for(j=0;j<strlen(str1);j++)
				{
					if(str1[j] == str3[i+j])
						continue;
					else
						break;
				}
				if(j == strlen(str1))
					return i+1;
			}
		}
		if(i > strlen(str3))
			return 0;
	}
	else
	{
		return 0;
	}
}
