//PROGRAM TO FIND GREATEST OF MATRIX

#include<stdio.h>
#include<conio.h>

int grt_mat();

void main()
{
	clrscr();
	printf("\n\n GREATER NUMBER IS %d",grt_mat());
	getch();
}
int grt_mat()
{
	int arr[10][10];
	int i,j,rows,cols;
	int g_no = 0;
	printf("\n\n ENTER THE NUMBER OF ROWS:\t");
	scanf("%d",&rows);
	printf("\n\n ENTER THE NUMBER OF COLUMNS:\t");
	scanf("%d",&cols);
	for(i = 0 ; i < rows ; i++)
	{
		for(j = 0 ; j < cols ; j++)
		{
			printf("\n\n ENTER ELEMENT [%d][%d]: \t",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0 ; i < rows ; i++)
	{
		for(j = 0 ; j < cols ; j++)
		{
			if(arr[i][j] > g_no)
			{
				g_no = arr[i][j];
			}

		}
	}
	return g_no;
}