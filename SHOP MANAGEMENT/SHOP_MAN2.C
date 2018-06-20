//PROGRAM FOR SHOP MANAGEMENT

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

/*================================DECLARING GLOBAL DATA=====================*/
	int COUNT = 0,COUNT_1 = 0;
	long int INCOME;
/*================================DEFINING STRUCTURES=======================*/
/*__________________________STRUCTURE FOR EMPLOYEE DETAILS__________________*/

struct EMPLOYEE_DETAILS
{
	char NAME[30];
	long int ID;
	float SALARY;
	long int PHONE_NO;
	char ADDRESS_1[100];
	int AGE;
	char GENDER[6];
	char POLICY[90];
	float BONUS;
	float COMMISSION;
	char POST[55];
}emp[100];

/*__________________________STRUCTURE FOR CUSTOMER DETAILS__________________*/

struct CUSTOMER_DETAILS
{
	char NAME_1[30];
	long int BILL_NO;
	float PRICE;
	long int PHONE_NO1;
	char ADDRESS_1[100];
	char PRODUCT_NAME[90];
}cust[100];

struct income
{
	int pro_code;
	char pro_name[20];
	float pro_cost;
}inc[100];

struct expenses
{
	float TRANSPORT;
	float BILLS;
	float SALARY;
	float MATERIAL;
}exp = {0,0,0,0};

/*================================DECLARING FUNCTIONS=======================*/

void MENU();
void PASSWORD();
void CHANGEPASSWORD();
int KEY();
void ADD();
void GETDETAILS();
void EMPLOYEE_MANAGER();
void EMPLOYEE_SALES();
void GET_EMPLOYEE();
void GET_CUSTOMER();
void GET_EXPENSES();
void DELETE();
void DISPLAY();
void DISPLAYCUST();
void DISPLAYEMPL();
void EXPENSES_DISPLAY();
void SEARCH();
void QUIT();
/*===========================FUNCTION MAIN===============================*/
void main()
{
	PASSWORD();
	getch();
}
/*===============================FUNCTION PASSWORD======================*/
/*_________________________TO SCAN AND VERIFY IT_________________________*/

void PASSWORD()
{
	FILE *fp;
	char c;
	char password[32], pass[32];
	int i,j,choice,cnt,k;
	textbackground(6);
	textcolor(2);
	clrscr();

	gotoxy(1,1);
	cprintf("\n\r*******************************************");
	for(i=0;i<15;i++)
	{
		printf("\n\r|                                         |");
	}
	cprintf("\n\r*******************************************");
	gotoxy(5,5);
	cprintf("\n\n\r|  ENTER THE PASSWORD:     ");



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
			else if(pass[i] == 1)
				QUIT();

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
		}while(c != EOF);
		fclose(fp);
		password[i-1] = '\0';
		if(strcmp(password,pass) != 0)
			cprintf("\n\r             WRONG PASSWORD");
		else
			MENU();
	}while(strcmp(password,pass) != 0);
}

/*======================================FUNCTION KEY=============================*/
/*____________________FUNCTION KEY TO DETERMINE WHICH KEY IS PRESSED_________________*/
int KEY()
{
	union REGS i,o;
	while(kbhit())
	;
	i.h.ah = 0;
	int86(22,&i,&o);
	return(o.h.ah);
}

/*============================FUNCTION MENU==============================*/
/________________________TO DISPLAY THE MENU_____________________________*/

void MENU()
{
	int CHOICE,n;
	clrscr();
	cprintf("\n\r*===============================================*");
	cprintf("\n\r|                                               |");
	cprintf("\n\r|    M         M  MEEEEEE  M     N  M      U    |");
	cprintf("\n\r|    M E     U M  E        EN    N  E      U    |");
	cprintf("\n\r|    M  N   N  M  N        N N   N  N      U    |");
	cprintf("\n\r|    M   U E   M  UEEEEEE  U  N  N  U      U    |");
	cprintf("\n\r|    M    M    M  N        N   N N  N      U    |");
	cprintf("\n\r|    M         M  E        E    NN  E      U    |");
	cprintf("\n\r|    M         M  MEEEEEE  M     N  MUUUUUUU    |");
	cprintf("\n\r|                                               |");
	cprintf("\n\r*===============================================*");
	textcolor(3);
	cprintf("\n\n\n\n\r*-----------------------------------------------------------*");
	textcolor(3);
	cprintf("\n\r|    *F1*                       ADD A ENTRY                 |");
	textcolor(3);
	cprintf("\n\r|    *F2*                       DELETE A ENTRY              |");
	textcolor(3);
	cprintf("\n\r|    *F3*                       DISPLAY                     |");
	textcolor(3);
	cprintf("\n\r|    *F4*                       SEARCH A ENTRY              |");
	textcolor(3);
	cprintf("\n\r|    *F5*                       CHANGE PASSWORD             |");
	textcolor(3);
	cprintf("\n\r|    *ESC*                      QUIT                        |");
	textcolor(3);
	cprintf("\n\r*-----------------------------------------------------------*");

	n = KEY();
	if(n == 59)
	{
		ADD();
	}
	else if(n == 60)
	{
		DELETE();
		QUIT();
	}
	else if(n == 61)
	{
		DISPLAY();
		QUIT();
	}
	else if(n == 62)
	{
		SEARCH();
	}
	else if (n == 63)
	{
		CHANGEPASSWORD();
	}
	else if(n == 1)
	{
		QUIT();
	}
	else
	{
		MENU();
	}
}

/*==================================FUNCTION ADD=========================*/
/*____________________________TO ADD A ENTRY____________________________*/

void ADD()
{
	int n;
	clrscr();
	cprintf("\n\n\n\n\r*-----------------------------------------------------*");
	textcolor(3);
	cprintf("\n\r|    *F1*                       ADD A EMPLOYEE              |");
	textcolor(3);
	cprintf("\n\r|    *F2*                       ADD A CUSTOMER              |");
	textcolor(3);
	cprintf("\n\r|    *F3*                       ADD EXPENSES                |");
	textcolor(3);
	cprintf("\n\r|    *F3*                       MENU                        |");
	textcolor(3);
	cprintf("\n\r|    *ESC*                      QUIT                        |");
	textcolor(3);
	cprintf("\n\r*-----------------------------------------------------------*");

	n = KEY();
	if(n == 59)
	{
		GET_EMPLOYEE();
	}
	else if(n == 60)
	{
		GET_CUSTOMER();
	}
	else if(n == 61)
	{
		GET_EXPENSES();
	}
	else if(n == 62)
	{
		MENU();
	}
	else if(n == 1)
	{
		QUIT();
	}
}

/*============================FUNCTION GET_EMPLOYEE=========================*/
/*___________________________TO GET EMPLOYEE DETAILS________________________*/

void GET_EMPLOYEE()
{
	float TEMP,TEMP1,TEMP2,TEMP3,TEMP4,TEMP5;
	char enter;
	char temp_1 , temp_2 , temp_3;
	temp_1 = MANAGER;
	temp_2 = SALESMAN;
	temp_3 = WATCHMAN;
	temp_4 = BILLMAN;
	textcolor(2);
	textbackground(0);
	clrscr();
	fflush(stdin);
	cprintf("ENTER THE NAME OF THE EMPLOYEE : ");
	gets(emp[COUNT].NAME);
	fflush(stdin);
	cprintf("\n\n\rENTER THE EMPLOYEE ID : ");
	scanf("%ld",&emp[COUNT].ID);
	fflush(stdin);
	cprintf("\n\n\rENTER THE SALARY OF THE EMPLOYEE : ");
	scanf("%f",&TEMP);
	emp[COUNT].SALARY = TEMP;
	INCOME += emp[COUNT].SALARY;
	fflush(stdin);
	cprintf("\n\n\rENTER THE PHONE NUMBER OF THE EMPLOYEE : ");
	scanf("%ld",&emp[COUNT].PHONE_NO);
	fflush(stdin);
	cprintf("\n\n\rENTER THE GENDER OF THE EMPLOYEE : ");
	gets(emp[COUNT].GENDER);
	fflush(stdin);
	cprintf("\n\n\rENTER THE AGE OF THE EMPLOYEE : ");
	scanf("%d",&emp[COUNT].AGE);
	fflush(stdin);
	cprintf("\n\n\rENTER THE POST OF THE EMPLOYEE : ");
	scanf("%d",&emp[COUNT].POST);
	if(POST == temp_1)
	{
		cprintf("\n\n\nPERQUISITES....");
		cprintf("\n\n\rENTER THE POLICY (RUPEES) GIVEN TO THE EMPLOYEE : ");
		scanf("%f",&TEMP3);
		emp[COUNT].POLICY = TEMP3;
		INCOME += emp[COUNT].POLICY;
		fflush(stdin);
		cprintf("\n\n\rENTER THE BONUS OF THE EMPLOYEE : ");
		scanf("%f",&TEMP4);
		TEMP4 = emp[COUNT].BONUS;
		INCOME += emp[COUNT].BONUS;
		fflush(stdin);
	}
	else if (POST == temp_2)
	{
		cprintf("\n\n\nPERQUISITES....");
		cprintf("\n\n\rENTER THE COMMISSION OF THE EMPLOYEE : ");
		scanf("%f",&TEMP5);
		TEMP5 = emp[COUNT].COMMISSION;
		INCOME += emp[COUNT].COMMISSION;
		fflush(stdin);	
	}
	else if(POST == temp_3 + temp_4)
	{
		getch();
	}
	fflush(stdin);
	COUNT++;
	printf("\n\nPRESS ENTER TO CONTINUE........");
	enter = 0;
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
			MENU();
	}
}
/*============================FUNCTION GET_CUSTOMER=========================*/
/*___________________________TO GET CUSTOMER DETAILS_______________________*/

void GET_CUSTOMER()
{
	char enter;
	float TEMP;
	textcolor(2);
	textbackground(0);
	clrscr();
	fflush(stdin);
	cprintf("NAME : ");
	gets(cust[COUNT_1].NAME_1);
	fflush(stdin);
	cprintf("\n\n\rPHONE NUMBER : ");
	scanf("%ld",&cust[COUNT_1].PHONE_NO1);
	fflush(stdin);
	cprintf("\n\n\rADDRESS : ");
	gets(cust[COUNT_1].ADDRESS_1);
	fflush(stdin);
	cprintf("\n\n\rBILL NUMBER : ");
	scanf("%ld",&cust[COUNT_1].BILL_NO);
	fflush(stdin);
	cprintf("\n\n\rPRODUCT NAME : ");
	gets(cust[COUNT_1].PRODUCT_NAME);
	fflush(stdin);
	cprintf("\n\n\rPRICE : ");
	scanf("%f",&TEMP);
	cust[COUNT_1].PRICE = TEMP;
	INCOME += cust[COUNT_1].PRICE;
	fflush(stdin);
	COUNT_1++;
	printf("\n\nPRESS ENTER TO CONTINUE........");
	enter = 0;
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
			MENU();
	}
}
void GET_EXPENSES()
{
	int i;
	char choice;
	float temp1,temp2,temp3;
	clrscr();
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
			exp.TRANSPORT += temp1;
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
			exp.BILLS += temp2;
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
			exp.MATERIAL += temp3;
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
	printf("\n\nPRESS ENTER TO CONTINUE........");
	enter = 0;
	while(1)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
			MENU();
	}
}
/*===========================FUNCTION DELETE=============================*/
/*-----------------------FUNCTION TO DELETE A ENTRY---------------------*/
void DELETE()
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
	scanf("%ld",&temp);
	for(i = 0 ; i <= COUNT ; i++)
	{
		if(temp == emp[COUNT].ID)
		{
			exp.SALARY -= emp[i].SALARY;
			for(j = i ; j <= emp[COUNT].ID ; j++)
			{
				emp[j] = emp[j+1];
			}
			COUNT--;
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
	if(i == COUNT + 1)
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


/*===========================FUNCTION SEARCH=================================*/
/*___________________________TO SEARCH A ENTRY______________________________*/
void SEARCH()
{
	int choice = 0,i,j,check,PONE,SAL;
	int enter;
	char TEMP[20];
	textcolor(0);
	clrscr();
	gotoxy(1,6);
	cprintf("*_______________________________________________________________*");
	gotoxy(1,7);
	cprintf("|                                                               |");
	gotoxy(1,8);
	cprintf("|       *F1*           SEARCH BY NAME.                          |");
	gotoxy(1,9);
	cprintf("|                                                               |");
	gotoxy(1,10);
	cprintf("|       *F2*           SEARCH BY SALARY.                        |");
	gotoxy(1,11);
	cprintf("|                                                               |");
	gotoxy(1,12);
	cprintf("|      *F3*            SEARCH BY PHONE NUMBER.                  |");
	gotoxy(1,13);
	cprintf("|                                                               |");
	gotoxy(1,14);
	cprintf("|      *F4*            GO TO MENU                               |");
	gotoxy(1,15);
	cprintf("|                                                               |");
	gotoxy(1,16);
	cprintf("*_______________________________________________________________*");

	while(choice != 59 && choice != 60 && choice != 61 && choice != 62)
	{
		choice = KEY();
		if(choice == 59)
		{
			textbackground(7);
			textcolor(0);
			clrscr();
			gotoxy(15,5);
			printf("\nENTER THE NAME : ");
			scanf("%s", TEMP);
			clrscr();
			DISPLAYEMPL();
			check = 0;
			for(i = 0; i <= COUNT; i++)
			{
				if(!(stricmp(emp[i].NAME,TEMP)))
				{
					//DISPLAY_NAME(i);
					check++;

				}
				if(check == 0)
					printf("\nNO RECORDS FOUND");
				gotoxy(1,15);
				printf("PRESS ENTER TO CONTINUE");
				enter = 0;
				while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					SEARCH();
			}
			}
		}

		else if(choice == 61)
		{
			textbackground(7);
			textcolor(0);
			clrscr();
			check = 0;
			gotoxy(15,5);
			printf("\nENTER THE SALARY : ");
			scanf("%ld",&SAL);
			clrscr();
			DISPLAYEMPL();
			for(i = 0; i < COUNT; i++)
			{
				if(emp[i].SALARY == SAL)
				{
					DISPLAYEMPL();
					check++;
				}
				if( check == 0)
				{
					printf("\nNO RECORD FOUND");
				}
			}
			gotoxy(1,15);
			printf("PRESS ENTER TO CONTINUE");
			enter = 0;
			while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					SEARCH();
			}
		}
		if(choice == 60)
		{
			textbackground(7);
			textcolor(0);
			clrscr();
			check = 0;
			printf("\nENTER THE PHONE NUMBER : ");
			scanf("%ld",&PONE);
			clrscr();
			//DISPLAY_1();
			for(i = 0; i < COUNT; i++)
			{
				if(emp[i].PHONE_NO == PONE)
				{
					//DISPLAY_NAME(i);
					check++;
				}
				if( check == 0)
				{
					printf("\nNO RECORD FOUND");
				}
			}
			gotoxy(20,10);
			printf("PRESS ENTER TO CONTINUE");
			enter = 0;
			while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					SEARCH();
			}
		}
		else if (choice == 62)
			MENU();
	}
}

/*==============================FUNCTION DISPLAY======================*/
void DISPLAY()
{
	int i,j,k,get,enter;
	struct student temp1;
	struct year temp2;
	struct year temp3;
	struct  otherinfo temp4;
	struct papers temp5;
	textbackground(7);
	clrscr();
	get = 0;
	gotoxy(25,13);
	printf("1.  DISPLAY CUSTOMER DETAILS");
	gotoxy(25,15);
	printf("2.  DISPLAY EMPLOYEE DETAILS");
	gotoxy(25,17);
	printf("3.  DISPLAY EXPENSES");
	gotoxy(25,19);
	printf("4.  GO TO MENU");
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
			EXPENSES_DISPLAY();
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
		printf("%s",cust[i].NAME);
		gotoxy(12,i+6);
		printf("%ld",cust[i].BILL_NO);
		gotoxy(30,i+6);
		printf("%ld",cust[i].PHONE_NO);
		gotoxy(42,i+6);
		printf("%f",cust[i].PRICE);
		gotoxy(57,i+6);
		printf("%s",cust[i].ADDRESS);
		gotoxy(71,i+6);
		printf("%ld",cust[i].product);
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
}
void DISPLAY_1()
{
	textbackground(7);
	textcolor(0);
	clrscr();
	gotoxy(1,2);
	printf("NAME");
	gotoxy(15,2);
	printf("BIRTHDAY");
	gotoxy(25,2);
	printf("ADMISSION");
	gotoxy(35,2);
	printf("REGISTRATION");
	gotoxy(47,2);
	printf("RECEIPT NO.");
	gotoxy(59,2);
	printf("BRANCH");
	gotoxy(66,2);
	printf("PERCENTAGE");
}
void DISPLAY_NAME(int i)
{
	textbackground(7);
	textcolor(0);
	clrscr();
	gotoxy(1,i+4);
	printf("%s %s",s[i].name,s[i].surname);
	gotoxy(15,i+4);
	printf("%d-%d-%d",birthday[i].day,birthday[i].month,birthday[i].year);
	gotoxy(25,i+4);
	printf("%d-%d-%d",admission[i].day,admission[i].month,admission[i].year);
	gotoxy(35,i+4);
	printf("%ld",p[i].registration);
	gotoxy(47,i+4);
	printf("%ld",p[i].receipt);
	gotoxy(59,i+4);
	printf("%s",o[i].branch);
	gotoxy(66,i+4);
	printf("%.2f",o[i].percentage);
}
void DISPLAY_T(int i)
{
	textbackground(7);
	textcolor(0);
	clrscr();
	gotoxy(1,i+4);
	printf("%s %s",temp_s[i].name,temp_s[i].surname);
	gotoxy(22,i+4);
	printf("%d-%d-%d",temp_birthday[i].day,temp_birthday[i].month,temp_birthday[i].year);
	gotoxy(32,i+4);
	printf("%d-%d-%d",temp_admission[i].day,temp_admission[i].month,temp_admission[i].year);
	gotoxy(42,i+4);
	printf("%ld",temp_p[i].registration);
	gotoxy(52,i+4);
	printf("%ld",temp_p[i].receipt);
	gotoxy(64,i+4);
	printf("%s",temp_o[i].branch);
	gotoxy(71,i+4);
	printf("%.2f",temp_o[i].percentage);
}

/*==========================FUNCTION CHANGEPASSWORD==============*/
/*______________________TO CHANGE THE SAVED PASSWORD_________________*/
void CHANGEPASSWORD()
{
	FILE *fp;
	char c;
	char password[32], pass[32];
	int i,j,choice,cnt,k;
	textbackground(6);
	textcolor(2);

	clrscr();
	gotoxy(1,1);
	cprintf("\n\r*******************************************");
	for(i=0;i<15;i++)
	{
		printf("\n\r|                                         |");
	}
	cprintf("\n\r*******************************************");
	gotoxy(5,5);
	printf("ENTER THE OLD PASSWORD : ");
	do
	{
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
		{
			gotoxy(5,7);
			printf("WRONG PASSWORD");
			getch();
			gotoxy(5,7);
			clreol();

		}
		else
		{
			gotoxy(5,10);
			pass[0] = '\0';
			password[0] = '\0';
			printf("ENTER THE NEW PASSWORD : ");
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
			fp = fopen("PASS.txt","w");
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

/*=================================FUNCTION QUIT============================*/
/*___________________________TO EXIT FROM THE PROGRAM_______________________*/

void QUIT()
{
	exit(0);
}

