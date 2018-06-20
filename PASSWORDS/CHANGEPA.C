#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char c;
	char password[32], pass[32];
	int i,j,choice,cnt,k;
	clrscr();
	printf("\nENTER THE OLD PASSWORD : ");
	/*gotoxy(1,1);
	printf("\n*******************************************");
	for(i=0;i<15;i++)
	{
		printf("\n|                                         |");
	}
	printf("\n*******************************************");
	gotoxy(5,5);
	printf("\n\n|  ENTER THE PASSWORD:\t");*/



	do
	{
		cnt = 0;
		for(i=0;i<32;i++)
		{
			choice = getch();
			pass[i] = choice;
			pass[i+1] = '\0';
			if(pass[i] != '\r' && pass[i]!= '\b')
				printf("*");
			else if(pass[i] == '\b')
				printf("\b \b");
			else if(pass[i] == '\r')
				break;

		}
		for(i=0;pass[i]!='\0';i++)
		{
			for(k=0;pass[k]!='\0';k++)
			{
				if(pass[k] == '\b')
				{
					cnt++;
					for(j=k;pass[j]!='\0';j++)
					{
						pass[j-1] = pass[j];
					}
					for(j=k-1;pass[j]!='\0';j++)
					{
						pass[j] = pass[j+1];
					}
					break;
				}
				else
					continue;
			}
		}
		pass[i-(cnt+1)] = '\0';
		fp = fopen("PASS.txt","r");
		i=0;
		do
		{
			c=fgetc(fp);
			password[i] = c;
			i++;
		}while(c!=EOF);
		fclose(fp);
		password[i-1] = '\0';
		if(strcmp(password,pass) != 0)
			printf("\n|             WRONG PASSWORD");
		else
		{
			pass[0] = '\0';
			password[0] = '\0';
			printf("\nENTER THE NEW PASSWORD : ");
				cnt = 0;
				for(i=0;i<32;i++)
				{
					choice = getch();
					pass[i] = choice;
					pass[i+1] = '\0';
					if(pass[i] != '\r' && pass[i]!= '\b')
						printf("*");
					else if(pass[i] == '\b')
						printf("\b \b");
					else if(pass[i] == '\r')
						break;

				}
				for(i=0;pass[i]!='\0';i++)
				{
					for(k=0;pass[k]!='\0';k++)
					{
						if(pass[k] == '\b')
						{
							cnt++;
							for(j=k;pass[j]!='\0';j++)
							{
								pass[j-1] = pass[j];
							}
							for(j=k-1;pass[j]!='\0';j++)
							{
								pass[j] = pass[j+1];
							}
							break;
						}
						else
							continue;
					}
				}
				pass[i-(cnt+1)] = '\0';
				fp = fopen("PASS.txt","r");
				i = 0;
				do
				{
					putc(pass[i],fp);
					password[i] = pass[i];
					if(pass[i] == '\0')
						break;
					i++;
				}while(1);
				fclose(fp);
				password[i-1] = '\0';

			}
	}while(strcmp(password,pass) != 0);
}