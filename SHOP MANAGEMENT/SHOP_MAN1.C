/*---------------------------------------------------------------------------
------------------------- PROGRAM FOR SHOP MANAGEMENT -----------------------
---------------------------------------------------------------------------*/

#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*------------------------ GLOBAL DECLARATION --------------------------*/

struct customer
{
	int cust_receipt;
	char cust_name[25];
	int pro_id;
	char cust_purchase[20];
	float cust_price;
	long int cust_phone;
}cust[100];

struct employee
{
	int emp_id;
	char emp_name[25];
	float emp_salary;
	char emp_address[100];
	long int emp_phone;
}emp[100];

struct income
{
	int pro_code;
	char pro_name[20];
	float pro_cost;
}inc[100];

struct expenses
{
	float exp_transport;
	float exp_bills;
	float exp_salary;
	float exp_material;
}exp = {0,0,0,0};

int cust_cnt,emp_cnt;
long int income;

/*------------------------ FUNCTION DECLARATION ------------------------*/

void PASSWORD();
void MENU();
int GET_KEY();
void CHANGE_PASS();
void ADD_ENTRY();
void EMP_DETAIL();
void CUST_DETAIL();
void EXP_DETAIL();
void DELETE_EMP();
void DISPLAY();
void DISPLAY_CUST();
void DISPLAY_EMP();
void SEARCH();
void SEARCH_EMP();
void SEARCH_CUST();
void BAL_SHEET();
void QUIT();

/*---------------------------- FUCTION MAIN -------------------------*/

void main()
{
	PASSWORD();
}

/*----------------------- FUNCTION PASSWORD -------------------------*/

void PASSWORD()
{
	FILE *fp;
	char c;
	char password[32],pass[32];
	int i,j,choice,cnt,k;
	clrscr();
	gotoxy(21,7);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	gotoxy(21,8);
	for(i = 0 ; i < 9 ; i++)
	{
		gotoxy(21,8+i);
		printf("%c                                      %c",186,186);
	}
	gotoxy(21,11);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",199);
		else if(i == 39)
			printf("%c",182);
		else
			printf("%c",196);
	}
	gotoxy(21,17);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 39)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(37,9);
	printf("ADMINISTRATOR");
	/*--------------------- ENTERING PASSWORD ----------------------*/
	gotoxy(24,14);
	printf("ENTER THE PASSWORD : ");

	do
	{
		gotoxy(45,14);
		cnt = 0;
		for(i = 0 ; i < 14 ; i++)
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
		/*----------------------- FOR REMOVING UNNECCESSARY CHARACTERS --------------------------*/
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
				{
					continue;
				}
			}
		}
		pass[i-(cnt+1)] = '\0';
		/*------------ GETTING PASSWORD FROM FILE --------------*/
		fp = fopen("SHOP.txt","r");
		i=0;
		do
		{
			c=fgetc(fp);
			password[i] = c;
			i++;
		}while(c!=EOF);
		fclose(fp);
		password[i-1] = '\0';
		/*------------ COMPARING PASSWORD ------------------*/
		if(strcmp(password,pass) != 0)
		{
			gotoxy(24,15);
			printf("WRONG PASSWORD");
			getch();
			gotoxy(45,14);
			printf("               \b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			gotoxy(24,15);
			printf("                              ");
		}
		else
		{
			MENU();
		}
	}
	while(strcmp(password,pass) != 0);
}

/*------------------------- FUNCTION GET_KEY ----------------------------*/

int GET_KEY()
{
	union REGS i,o;
	while(!kbhit())
	;
	i.h.ah = 0;
	int86(22,&i,&o);
	return (o.h.ah);
}

/*--------------------------- FUNCTION MENU -----------------------------*/

void MENU()
{
	int i;
	int choice;
	clrscr();

	gotoxy(24,1);
	printf("M       M  EEEEEEEE  N   N  U    U");
	gotoxy(24,2);
	printf("MM     MM  E         NN  N  U    U");
	gotoxy(24,3);
	printf("M M   M M  EEEEEEEE  N N N  U    U");
	gotoxy(24,4);
	printf("M  M M  M  E         N  NN  U    U");
	gotoxy(24,5);
	printf("M   M   M  EEEEEEEE  N   N  UUUUUU");
	gotoxy(11,8);
	for(i = 0 ; i < 60 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 59)
			printf("%c",187);
		else
			printf("%c",205);
	}
	for(i = 0 ; i < 16 ; i++)
	{
		gotoxy(11,9+i);
		printf("%c                                                          %c",186,186);
	}
	gotoxy(11,24);
	for(i = 0 ; i < 60 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 59)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(30,11);
	printf("F1.  CHANGE PASSWORD");
	gotoxy(30,13);
	printf("F2.  ADD RECORD");
	gotoxy(30,15);
	printf("F3.  DELETE RECORD");
	gotoxy(30,17);
	printf("F4.  SEARCH RECORD");
	gotoxy(30,19);
	printf("F5.  DISPLAY RECORD");
	gotoxy(30,21);
	printf("ESC. QUIT");
	choice = GET_KEY();
	switch(choice)
	{
		case 59:
		{
			CHANGE_PASS();
			break;
		}
		case 60:
		{
			ADD_ENTRY();
			break;
		}
		case 61:
		{
			DELETE_EMP();
			break;
		}
		case 62:
		{
			SEARCH();
			break;
		}
		case 63:
		{
			DISPLAY();
			break;
		}
		case 1:
		{
			QUIT();
			break;
		}
		default:
		{
			MENU();
			break;
		}
	}
}

/*--------------------- FUNCTION CHANGE_PASS ----------------------*/

void CHANGE_PASS()
{
	FILE *fp;
	char c,pass[25],password[25];
	int i,j,choice,cnt,k;
	clrscr();
	gotoxy(21,7);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	gotoxy(21,8);
	for(i = 0 ; i < 11 ; i++)
	{
		gotoxy(21,8+i);
		printf("%c                                      %c",186,186);
	}
	gotoxy(21,11);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",199);
		else if(i == 39)
			printf("%c",182);
		else
			printf("%c",196);
	}
	gotoxy(21,19);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 39)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(37,9);
	printf("ADMINISTRATOR");
	/*--------------------- ENTERING PASSWORD ----------------------*/
	gotoxy(24,14);
	printf("ENTER THE OLD PASSWORD : ");
	do
	{
		gotoxy(48,14);
		cnt = 0;
		for(i = 0 ; i < 14 ; i++)
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
		/*----------------------- FOR REMOVING UNNECCESSARY CHARACTERS --------------------------*/
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
				{
					continue;
				}
			}
		}
		pass[i-(cnt+1)] = '\0';
		/*------------ GETTING PASSWORD FROM FILE --------------*/
		fp = fopen("SHOP.txt","r");
		i=0;
		do
		{
			c=fgetc(fp);
			password[i] = c;
			i++;
		}while(c!=EOF);
		fclose(fp);
		password[i-1] = '\0';
		/*------------ COMPARING PASSWORD ------------------*/
		if(strcmp(password,pass) != 0)
		{
			gotoxy(24,15);
			printf("WRONG PASSWORD");
			getch();
			gotoxy(45,14);
			printf("               \b\b\b\b\b\b\b\b\b\b\b\b\b\b");
			gotoxy(24,15);
			printf("                              ");
		}
		else
		{
			gotoxy(24,16);
			pass[0] = '\0';
			password[0] = '\0';
			printf("ENTER THE NEW PASSWORD : ");
			gotoxy(48,16);
			cnt = 0;
			for(i = 0 ; i < 14 ; i++)
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
			/*----------------------- FOR REMOVING UNNECCESSARY CHARACTERS --------------------------*/
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
					{
						continue;
					}
				}
			}
			pass[i-(cnt+1)] = '\0';
			fp = fopen("PASSWORD.txt","w");
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
			password[i] = '\0';
			MENU();
		}
	}
	while(strcmp(password,pass) != 0);
}

/*--------------------- FUNCTION ADD_ENTRY ------------------------*/

void ADD_ENTRY()
{
	int i;
	char get;
	clrscr();
	gotoxy(21,11);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	for(i = 0 ; i < 9 ; i++)
	{
		gotoxy(21,12+i);
		printf("%c                                      %c",186,186);
	}
	gotoxy(21,21);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 39)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(25,13);
	printf("1.  ADD CUSTOMER DETAIL");
	gotoxy(25,15);
	printf("2.  ADD EMPLOYEE DETAIL");
	gotoxy(25,17);
	printf("3.  ADD EXPENSES");
	gotoxy(25,19);
	printf("3.  GO TO MENU");
	get = 0;
	while(1)
	{
		get = getch();
		if(get == 49)
		{
			CUST_DETAIL();
		}
		else if(get == 50)
		{
			EMP_DETAIL();
		}
		else if(get == 51)
		{
			EXP_DETAIL();
		}
		else if(get == 52)
		{
			MENU();
		}
	}
}

/*------------------------ FUNCTION CUST_DETAIL -------------------------*/

void CUST_DETAIL()
{
	float temp;
	char enter;
	clrscr();
	printf("\n\nENTER THE CUSTOMER ID : \t");
	scanf("%d",&cust[cust_cnt].cust_receipt);
	fflush(stdin);
	printf("\n\nENTER THE CUSTOMER NAME : \t");
	gets(cust[cust_cnt].cust_name);
	fflush(stdin);
	printf("\n\nENTER THE PRODUCT ID : \t");
	scanf("%d",&cust[cust_cnt].pro_id);
	fflush(stdin);
	printf("\n\nENTER THE PRODUCT NAME : \t");
	gets(cust[cust_cnt].cust_purchase);
	fflush(stdin);
	printf("\n\nENTER THE PRODUCT COST : \t");
	scanf("%f",&temp);
	cust[cust_cnt].cust_price = temp;
	fflush(stdin);
	income += cust[cust_cnt].cust_price;
	printf("\n\nENTER THE CUSTOMER'S PHONE NUMBER : \t");
	scanf("%ld",&cust[cust_cnt].cust_phone);
	fflush(stdin);
	cust_cnt++;
	printf("\n\nPRESS ENTER TO CONTINUE........");
	enter = 0;
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
			MENU();
	}
}

/*------------------------ FUNCTION EMP_DETAIL -------------------------*/

void EMP_DETAIL()
{
	float temp;
	char enter;
	clrscr();
	fflush(stdin);
	printf("\n\nENTER THE EMPLOYEE ID : \t");
	scanf("%d",&emp[emp_cnt].emp_id);
	fflush(stdin);
	printf("\n\nENTER THE EMPLOYEE NAME : \t");
	gets(emp[emp_cnt].emp_name);
	fflush(stdin);
	printf("\n\nENTER THE EMPLOYEE'S SALARY : \t");
	scanf("%f",&temp);
	emp[emp_cnt].emp_salary = temp;
	exp.exp_salary += emp[emp_cnt].emp_salary;
	fflush(stdin);
	printf("\n\nENTER THE EMPLOYEE'S ADDRESS : \t");
	gets(emp[emp_cnt].emp_address);
	fflush(stdin);
	printf("\n\nENTER THE EMPLOYEE'S PHONE NUMBER : \t");
	scanf("%ld",&emp[emp_cnt].emp_phone);
	fflush(stdin);
	emp_cnt++;
	printf("\n\nPRESS ENTER TO CONTINUE........");
	enter = 0;
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
			MENU();
	}
}

/*------------------------ FUNCTION EXP_DETAIL -------------------------*/

void EXP_DETAIL()
{
	int i;
	char choice;
	float temp1,temp2,temp3;
	gotoxy(21,10);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	for(i = 0 ; i < 9 ; i++)
	{
		gotoxy(21,11+i);
		printf("%c                                      %c",186,186);
	}
	gotoxy(21,21);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 39)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(25,13);
	printf("1.TRANSPORTATION COST");
	gotoxy(25,15);
	printf("2.BILLS");
	gotoxy(25,17);
	printf("3.MATERIAL COST");
	gotoxy(25,19);
	printf("4.GO TO MENU");
	choice = 0;
	while(1)
	{
		choice = getch();
		if(choice == 49)
		{
			gotoxy(47,13);
			printf(": \t");
			scanf("%f",temp1);
			exp.exp_transport += temp1;
			gotoxy(47,13);
			clreol();
			gotoxy(60,13);
			printf("%c",186);
			gotoxy(39,19);
		}
		else if(choice == 50)
		{
			gotoxy(40,15);
			printf(": \t");
			scanf("%f",temp2);
			exp.exp_bills += temp2;
			gotoxy(40,15);
			clreol();
			gotoxy(60,15);
			printf("%c",186);
			gotoxy(39,19);
		}
		else if(choice == 51)
		{
			gotoxy(40,17);
			printf(": \t");
			scanf("%f",temp1);
			exp.exp_material += temp3;
			gotoxy(40,17);
			clreol();
			gotoxy(60,17);
			printf("%c",186);
			gotoxy(39,19);
		}
		else if(choice == 52)
		{
			MENU();
		}
	}
}

/*------------------------ FUNCTION DELETE_EMP -------------------------*/

void DELETE_EMP()
{
	char enter;
	int i,j;
	int temp;
	clrscr();
	label:
	gotoxy(20,15);
	clreol();
	gotoxy(20,15);
	printf("ENTER THE EMPLOYEE ID : \t");
	scanf("%d",&temp);
	for(i = 0 ; i <= emp_cnt ; i++)
	{
		if(temp == emp[i].emp_id)
		{
			exp.exp_salary -= emp[i].emp_salary;
			for(j = i ; j <= emp_cnt ; j++)
			{
				emp[j] = emp[j+1];
			}
			emp_cnt--;
			gotoxy(20,17);
			printf("PRESS ENTER TO CONTINUE");
			enter = 0;
			while(1)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					MENU();
			}
		}
	}
	if(i == emp_cnt + 1)
	{
		gotoxy(20,17);
		printf("EMPLOYEE ID NOT FOUND!!");
		delay(1500);
		gotoxy(20,17);
		clreol();
		gotoxy(56,15);
		clreol();
		enter = 0;
		gotoxy(20,17);
		printf("1.   ENTER AGAIN");
		gotoxy(20,19);
		printf("2.   GO TO MENU");
		while(1)
		{
			enter = getch();
			if(enter == 50)
				MENU();
			else if(enter == 49)
				goto label;
		}
	}
}

/*------------------------ FUNCTION DISPLAY -------------------------*/

void DISPLAY()
{
	int i;
	char get;
	clrscr();
	gotoxy(21,11);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	for(i = 0 ; i < 9 ; i++)
	{
		gotoxy(21,12+i);
		printf("%c                                      %c",186,186);
	}
	gotoxy(21,21);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 39)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(25,13);
	printf("1.  DISPLAY CUSTOMER DETAILS");
	gotoxy(25,15);
	printf("2.  DISPLAY EMPLOYEE DETAILS");
	gotoxy(25,17);
	printf("3.  DISPLAY BALANCE SHEET");
	gotoxy(25,19);
	printf("4.  GO TO MENU");
	get = 0;
	while(1)
	{
		get = getch();
		if(get == 49)
		{
			DISPLAY_CUST();
		}
		else if(get == 50)
		{
			DISPLAY_EMP();
		}
		else if(get == 51)
		{
			BAL_SHEET();
		}
		else if(get == 52)
		{
			MENU();
		}
	}
}

/*------------------------ FUNCTION DISPLAY_CUST -------------------------*/

void DISPLAY_CUST()
{
	int i;
	char enter = 0;
	clrscr();
	printf("\n\n\t\t\t\tCUSTOMER DETAILS");
	printf("\n\nCUST ID    CUST NAME       PRODUCT ID  PRODUCT NAME    PRODUCT COST  PHONE NO.");
	for(i = 0 ; i <= cust_cnt ; i++)
	{
		gotoxy(1,i+6);
		printf("%d",cust[i].cust_receipt);
		gotoxy(12,i+6);
		printf("%s",cust[i].cust_name);
		gotoxy(30,i+6);
		printf("%d",cust[i].pro_id);
		gotoxy(42,i+6);
		printf("%s",cust[i].cust_purchase);
		gotoxy(57,i+6);
		printf("%.2f",cust[i].cust_price);
		gotoxy(71,i+6);
		printf("%ld",cust[i].cust_phone);
	}
	printf("\n\n\nPRESS ENTER TO CONTINUE...........");
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
		{
			DISPLAY();
		}
	}
}

/*------------------------ FUNCTION DISPLAY_EMP -------------------------*/

void DISPLAY_EMP()
{
	int i;
	char enter = 0;
	clrscr();
	printf("\n\n\t\t\t\tEMPLOYEE DETAILS");
	printf("\n\nID        NAME           SALARY      PHONE NO.   ADDRESS");
	for(i = 0 ; i <= emp_cnt ; i++)
	{
		gotoxy(1,i+6);
		printf("%d",emp[i].emp_id);
		gotoxy(11,i+6);
		printf("%s",emp[i].emp_name);
		gotoxy(26,i+6);
		printf("%.2f",emp[i].emp_salary);
		gotoxy(38,i+6);
		printf("%ld",emp[i].emp_phone);
		gotoxy(50,i+6);
		printf("%s",emp[i].emp_address);
	}
	printf("\n\n\nPRESS ENTER TO CONTINUE...........");
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
		{
			DISPLAY();
		}
	}
}

/*------------------------ FUNCTION SEARCH -------------------------*/

void SEARCH()
{
	int i;
	char get;
	clrscr();
	gotoxy(21,11);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	for(i = 0 ; i < 7 ; i++)
	{
		gotoxy(21,12+i);
		printf("%c                                      %c",186,186);
	}
	gotoxy(21,19);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",200);
		else if(i == 39)
			printf("%c",188);
		else
			printf("%c",205);
	}
	gotoxy(25,13);
	printf("1.  SEARCH CUSTOMER");
	gotoxy(25,15);
	printf("2.  SEARCH EMPLOYEE");
	gotoxy(25,17);
	printf("3.  GO TO MENU");
	get = 0;
	while(1)
	{
		get = getch();
		if(get == 49)
		{
			SEARCH_CUST();
		}
		else if(get == 50)
		{
			SEARCH_EMP();
		}
		else if(get == 51)
		{
			MENU();
		}
	}
}

/*------------------------ FUNCTION SEARCH_EMP -------------------------*/

void SEARCH_EMP()
{
	getch();
}

/*------------------------ FUNCTION SEARCH_CUST -------------------------*/

void SEARCH_CUST()
{
	int temp;
	clrscr();
	gotoxy(25,13);
	printf("ENTER THE CUSTOMER ID : \t");
	scanf("%d",&temp);
	clrscr();
	DISPLAY_HEADINGS();
	for(i = 0 ; i < count ; i++)
	{
		if(num[i].registration == temp3)
		{
			DISPLAY(i);
			break;
		}
	}
	if(i == cust_cnt)
	{
		gotoxy(25,5);
		printf("NO RECORDS FOUND");
	}
	gotoxy(20,10);
	printf("PRESS ENTER TO CONTINUE")
	enter = 0;
	while(enter != 10 || enter!= 13)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
		SEARCH();
	}
}

/*------------------------ FUNCTION BAL_SHEET -------------------------*/

void BAL_SHEET()
{
	getch();
}

/*------------------------ FUNCTION QUIT -------------------------*/

void QUIT()
{
	exit(0);
}
