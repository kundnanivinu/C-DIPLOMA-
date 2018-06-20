// PROGRAM FOR MATRIX OPERATIONS

#include<stdio.h>
#include<conio.h>

void main()
{
	int m1[10][10],m2[10][10],res[10][10];
	int r1,c1,r2,c2;
	int i,j;
	int k;
	clrscr();
	printf("\nADDITION OF MATRICES");
	printf("\n\nENTER ROWS FOR MATRIX 1 : \t");
	scanf("%d",&r1);
	printf("\n\nENTER COLUMNS FOR MATRIX 1 : \t");
	scanf("%d",&c1);
	printf("\n\nENTER ROWS FOR MATRIX 2 : \t");
	scanf("%d",&r2);
	printf("\n\nENTER COLUMNS FOR MATRIX 2 : \t");
	scanf("%d",&c2);
	if(r1!=r2  || c1!=c2)
	{
		printf("\nADDITION NOT POSSIBLE");
		break;
	}
	printf("\n\nENTER VALUES FOR MATRIX 1 ....");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nENTER VALUE [%d][%d] : ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n\nENTER VALUES FOR MATRIX 2 ....");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nENTER VALUE [%d][%d] : ",i+1,j+1);
			scanf("%d",&m2[i][j]);

		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			res[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printf("\n\nMATRIX 1 IS AS ....");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
	}
	printf("\n\nMATRIX 2 IS AS ....");
	for(i=0;i<r2;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
			printf("%d\t",m2[i][j]);
		}
	}
	printf("\n\nADDITION OF MATRICES IS AS ....");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d\t",res[i][j]);
		}
	}			
	printf("\nMULTIPLICATION OF MATRICES");
	printf("\n\nENTER ROWS FOR MATRIX 1 : \t");
	scanf("%d",&r1);
	printf("\n\nENTER COLUMNS FOR MATRIX 1 : \t");
	scanf("%d",&c1);
	printf("\n\nENTER ROWS FOR MATRIX 2 : \t");
	scanf("%d",&r2);
	printf("\n\nENTER COLUMNS FOR MATRIX 2 : \t");
	scanf("%d",&c2);
	if(c1!=r2)
	{
		printf("\nMULTIPLICATION NOT POSSIBLE");
		break;
	}
	printf("\n\nENTER VALUES FOR MATRIX 1 ....");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nENTER VALUE [%d][%d] : ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n\nENTER VALUES FOR MATRIX 2 ....");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nENTER VALUE [%d][%d] : ",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			res[i][j]=0;
			for(k=0;k<c1;k++)
			{
				res[i][j]+=(m1[i][k]*m2[k][j]);
			}
		}
	}
	printf("\n\nMATRIX 1 IS AS ....");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
	}
	printf("\n\nMATRIX 2 IS AS ....");
	for(i=0;i<r2;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
		printf("%d\t",m2[i][j]);
		}
	}
	printf("\n\nMULTIPLICATION OF MATRICES IS AS ....");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
			printf("%d\t",res[i][j]);
		}
	}
	printf("\nTRANSPOSE OF MATRICES");
	printf("\n\nENTER ROWS FOR MATRIX : \t");
	scanf("%d",&r1);
	rintf("\n\nENTER COLUMNS FOR MATRIX : \t");
	scanf("%d",&c1);
	printf("\n\nENTER VALUES FOR MATRIX ....");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nENTER VALUE [%d][%d] : ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n\nGIVEN MATRIX IS AS ....");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d\t",m1[i][j]);
		}
	}
	printf("\n\nTRANSPOSE OF MATRIX IS AS ....");
	for(i=0;i<c1;i++)
	{
		printf("\n");
		for(j=0;j<r1;j++)
		{
			printf("%d\t",m1[j][i]);
		}
	}
			
	getch();
}