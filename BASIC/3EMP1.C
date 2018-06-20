//PROGRAM TO FIND HIGHEST SALARY OF EMPLOYEE FROM ARRAY OF STRUCTURES

#include<stdio.h>
#include<conio.h>

void main()
{
	struct employee
	{
		int emp_id;
		char emp_name[30];
		float emp_salary;
	}e[100];
	int n,i;
	float f_temp,temp_salary = 0.0;

	clrscr();

	printf("\n\n ENTER THE NUMBER OF RECORDS:\t");
	scanf("%d",&n);
	printf("\n\n ENTER THE RECORDS...............");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n\n ENTER RECORD %d.........",i+1);
		printf("\n\n ENTER THE EMPLOYEE ID:\t");
		scanf("%d",&e[i].emp_id);
		fflush(stdin);
		printf("\n\n ENTER THE NAME OF EMPLOYEE:\t");
		gets(e[i].emp_name);
		printf("\n\n ENTER THE SALARY OF EMPLOYEE:\t");
		scanf("%f",&f_temp);
		e[i].emp_salary = f_temp;
	}
	printf("\n\n----------------------------------------------------");
	printf("\n\n THE RECORDS ARE AS FOLLOWS..........");
	printf("\n\n EMP_ID \t NAME \t SALARY");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n\n %d \t %s \t%.2f",e[i].emp_id,e[i].emp_name,e[i].emp_salary);
		if(e[i].emp_salary > temp_salary)
			temp_salary = e[i].emp_salary;
	}
	printf("\n\n THE HIGHEST SALARY IS %.2f",temp_salary);
	getch();
}
