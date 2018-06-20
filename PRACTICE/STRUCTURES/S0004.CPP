#include<stdio.h>
#include<conio.h>

struct student
	{
		char student_name[20];
		int student_rollno;
		float student_per;
	}s[5];

void main()
{
	int i;
	float temp;

	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\nENTER RECORD : %d",i+1);
		printf("\n\nENTER THE ROLL NUMBER OF THE STUDENT : ");
		scanf("%d",&s[i].student_rollno);
		printf("\n\nENTER THE NAME OF THE STUDENT : ");
		scanf("%s",s[i].student_name);
		printf("\n\nENTER THE PERCENTAGE OF THE STUDENT : ");
		scanf("%f",&temp);
		s[i].student_per=temp;
	}

	printf("\n\nROLL\tNAME\tPERCENTAGE");
	for(i=0;i<3;i++)
	{
		printf("\n\n%d\t%s\t%f",s[i].student_rollno,s[i].student_name,s[i].student_per);
	}
	getch();
}