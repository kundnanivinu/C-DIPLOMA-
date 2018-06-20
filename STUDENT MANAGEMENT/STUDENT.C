/*----------------------------------------------------------------------
---------------- PROGRAM TO MANAGE RECORDS OF STUDENTS -----------------
------------------------------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

/*--------------------------- FUNCTIONS -------------------------------*/

void PASSWORD();
int GET_KEY();
void MENU();
void CHANGE_PASS();
void ADD_ENTRY();
long int CHECK_REG(long int);
long int CHECK_REC(long int);
void DELETE_ENTRY();
void MAIN_DISPLAY();
void DISPLAY_HEADINGS();
void DISPLAY(int);
void TEMP_DISPLAY(int);
void SEARCH();
void QUIT();

/*----------------- GLOBAL VARIABLE DECLARATION ---------------------*/

int count;
char password[32],pass[32];

/*-------------------------- STRUCTURES -----------------------------*/

struct STUDENT
{
	char name[15];
	char surname[25];
}temp_stud[100],stud[100];

struct DATE
{
	int day;
	int month;
	int year;
}birthday[100],admission[100],temp_birthday[100],temp_admission[100];

struct INFORMATION
{
	char branch[2];
	float percentage;
}info[100],temp_info[100];

struct NUMBERS
{
	long int registration;
	long int fee_receipt;
}num[100],temp_num[100];

/*------------------------- FUNCTION MAIN ---------------------------*/

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
		fp = fopen("PASSWORD.txt","r");
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
			DELETE_ENTRY();
			break;
		}
		case 62:
		{
			SEARCH();
			break;
		}
		case 63:
		{
			MAIN_DISPLAY();
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
	char c;
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
		fp = fopen("PASSWORD.txt","r");
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
	int enter;
	long int regis,receipt;
	float temp;
	clrscr();
	printf("\nENTRY %d .......",count+1);
	fflush(stdin);
	printf("\n\n   ENTER NAME : \t");
	gets(stud[count].name);
	fflush(stdin);
	printf("\n\n   ENTER SURNAME : \t");
	gets(stud[count].surname);
	fflush(stdin);
	printf("\n\n   ENTER DATE OF BIRTH (DD MM YY) : \t");
	scanf("%d%d%d",&birthday[count].day,&birthday[count].month,&birthday[count].year);
	fflush(stdin);
	printf("\n\n   ENTER THE DATE OF ADMISSION (DD MM YY) : \t");
	scanf("%d%d%d",&admission[count].day,&admission[count].month,&admission[count].year);
	fflush(stdin);
	printf("\n\n   ENTER THE REGISTRATION NUMBER : \t");
	scanf("%ld",&num[count].registration);
	regis = CHECK_REG(num[count].registration);
	label1:
	if(regis != 0)
	{
		num[count].registration = regis;
		regis = CHECK_REG(num[count].registration);
		goto label1;
	}
	fflush(stdin);
	printf("\n\n   ENTER THE BRANCH : \t");
	gets(info[count].branch);
	fflush(stdin);
	printf("\n\n   ENTER THE FEE RECEIPT NUMBER : \t");
	scanf("%ld",&num[count].fee_receipt);
	receipt = CHECK_REC(num[count].fee_receipt);
	label2:
	if(receipt != 0)
	{
		num[count].fee_receipt = receipt;
		receipt = CHECK_REC(num[count].fee_receipt);
		goto label2;
	}
	fflush(stdin);
	printf("\n\n   ENTER THE PERCENTAGE : \t");
	scanf("%f",&temp);
	info[count].percentage = temp;
	count++;
	printf("\n\n PRESS ENTER TO CONTINUE");
	enter = 0;
	while(enter != 10 || enter!= 13)
	{
		enter = getch();
		if(enter == 10 || enter == 13)
			MENU();
	}
}

/*------------ FUNCTION FOR CHECKING REGISTRATION NUMBER -------------*/

long int CHECK_REG(long int regis)
{
	int i;
	for(i = 0 ; i < count ; i++)
	{
		if(num[i].registration == regis)
		{
			printf("REGISTRATION NUMBER ALREADY EXISTS !! ENTER AGAIN !");
			delay(1500);
			gotoxy(1,17);
			clreol();
			gotoxy(40,16);
			clreol();
			scanf("%ld",&regis);
			return regis;
		}
	}
	return 0;
}

/*------------ FUNCTION FOR CHECKING FEE RECEIPT NUMBER --------------*/

long int CHECK_REC(long int receipt)
{
	int i;
	for(i = 0 ; i < count ; i++)
	{
		if(num[i].fee_receipt == receipt)
		{
			printf("FEE RECEIPT NUMBER ALREADY EXISTS !! ENTER AGAIN !");
			delay(1500);
			gotoxy(1,23);
			clreol();
			gotoxy(41,22);
			clreol();
			scanf("%ld",&receipt);
			return receipt;
		}
	}
	return 0;
}

/*--------------------- FUNCTION DELETE_ENTRY ---------------------*/

void DELETE_ENTRY()
{
	int i,j;
	int get,enter;
	long int temp;
	float temp1;
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
	printf("1.  DELETE BY REGISTRATION NUMBER");
	gotoxy(25,15);
	printf("2.  DELETE BY FEE RECEIPT NUMBER");
	gotoxy(25,17);
	printf("3.  GO TO MENU");
	get = 0;
	while(get != 49 && get != 50 && get != 51)
	{
		get = getch();
		if(get == 49)
		{
			clrscr();
			gotoxy(20,15);
			printf("ENTER THE REGISTRATION NUMBER : \t");
			label3:
			scanf("%ld",&temp);
			for(i = 0 ; i <= count ; i++)
			{
				if(temp == num[i].registration)
				{
					for(j = i ; j <= count ; j++)
					{
						stud[j] = stud[j+1];
						birthday[j] = birthday[j+1];
						admission[j] = admission[j+1];
						num[j] = num[j+1];
						info[j] = info[j+1];
					}
					count--;
					gotoxy(20,17);
					printf("PRESS ENTER TO CONTINUE");
					enter = 0;
					while(enter != 10 || enter!= 13)
					{
						enter = getch();
						if(enter == 10 || enter == 13)
							MENU();
					}
				}
			}
			if(i == count + 1)
			{
				gotoxy(20,17);
				printf("REGISTRATION NUMBER NOT FOUND!! ENTER AGAIN!");
				delay(1500);
				gotoxy(20,17);
				clreol();
				gotoxy(56,15);
				clreol();
				goto label3;
			}
		}
		else if(get == 50)
		{
			clrscr();
			gotoxy(20,15);
			printf("ENTER THE FEE RECEIPT NUMBER : \t");
			label4:
			scanf("%ld",&temp);
			for(i = 0 ; i <= count ; i++)
			{
				if(temp == num[i].fee_receipt)
				{
					for(j = i ; j <= count ; j++)
					{
						stud[j] = stud[j+1];
						birthday[j] = birthday[j+1];
						admission[j] = admission[j+1];
						info[j] = info[j+1];
						num[j] = num[j+1];
					}
					count--;
					gotoxy(20,17);
					printf("PRESS ENTER TO CONTINUE");
					enter = 0;
					while(enter != 10 || enter!= 13)
					{
						enter = getch();
						if(enter == 10 || enter == 13)
							MENU();
					}
				}
			}
			if(i == count + 1)
			{
				gotoxy(20,17);
				printf("FEE RECEIPT NUMBER NOT FOUND!! ENTER AGAIN!");
				delay(1500);
				gotoxy(20,17);
				clreol();
				gotoxy(56,15);
				clreol();
				goto label4;
			}
		}
		else if(get == 51)
		{
			MENU();
		}
	}
}

/*--------------------- FUNCTION SEARCH ---------------------------*/

void SEARCH()
{
	int i,get,check,enter,temp1,temp2;
	long int temp3;
	char temp[20];
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
	printf("1.  SEARCH BY NAME");
	gotoxy(25,15);
	printf("2.  SEARCH BY DATE OF BIRTH");
	gotoxy(25,17);
	printf("3.  SEARCH BY REGISTRATION NUMBER");
	gotoxy(25,19);
	printf("4.  GO TO MENU");
	get = 0;
	while(get != 49 && get != 50 && get != 51 && get != 52)
	{
		get = getch();
		if(get == 49)
		{
			clrscr();
			gotoxy(25,13);
			printf("ENTER THE NAME OF STUDENT : \t");
			scanf("%s",temp);
			clrscr();
			DISPLAY_HEADINGS();
			check = 0;
			for(i = 0 ; i <= count ; i++)
			{
				if(!(stricmp(stud[i].name,temp)))
				{
					DISPLAY(i);
					check++;
				}
			}
			if(check == 0)
			{
				gotoxy(25,5);
				printf("NO RECORDS FOUND");
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
		else if(get == 50)
		{
			clrscr();
			check = 0;
			gotoxy(25,10);
			printf("ENTER THE DATE : \t");
			scanf("%d",&temp1);
			gotoxy(25,12);
			printf("ENTER THE MONTH : \t");
			scanf("%d",&temp2);
			clrscr();
			DISPLAY_HEADINGS();
			for(i = 0 ; i < count ; i++)
			{
				if(birthday[i].day == temp1 && birthday[i].month == temp2)
				{
					DISPLAY(i);
					check++;
				}
				if(check == 0)
				{
					gotoxy(25,5);
					printf("NO RECORDS FOUND");
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
		else if(get == 51)
		{
			clrscr();
			gotoxy(25,13);
			printf("ENTER THE REGISTRATION NUMBER : \t");
			scanf("%ld",&temp3);
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
			if(i == count)
			{
				gotoxy(25,5);
				printf("NO RECORDS FOUND");
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
		else if(get == 52)
		{
			MENU();
		}
	}
}

/*-------------------- FUNCTION MAIN_DISPLAY ----------------------*/

void MAIN_DISPLAY()
{
	int i,j,k,get,enter;
	struct STUDENT temp1;
	struct DATE temp2;
	struct DATE temp3;
	struct INFORMATION temp4;
	struct NUMBERS temp5;
	clrscr();
	gotoxy(21,9);
	for(i = 0 ; i < 40 ; i++)
	{
		if(i == 0)
			printf("%c",201);
		else if(i == 39)
			printf("%c",187);
		else
			printf("%c",205);
	}
	for(i = 0 ; i < 11 ; i++)
	{
		gotoxy(21,10+i);
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
	gotoxy(25,11);
	printf("1.  DISPLAY ALL");
	gotoxy(25,13);
	printf("2.  DISPLAY BY NAME");
	gotoxy(25,15);
	printf("3.  DISPLAY BY SURNAME");
	gotoxy(25,17);
	printf("4.  DISPLAY BY FEE RECEIPT NUMBER");
	gotoxy(25,19);
	printf("5.  GO TO MENU");
	get = 0;
	while(get != 49 && get != 50 && get != 51 && get != 52 && get!= 53)
	{
		get = getch();
		if(get == 49)
		{
			clrscr();
			DISPLAY_HEADINGS();
			for(i = 0 ; i < count ; i++)
			{
				DISPLAY(i);
			}
			printf("\n\nPRESS ENTER TO CONTINUE");
			enter = 0;
			while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					MAIN_DISPLAY();
			}
		}
		else if(get == 50)
		{
			clrscr();
			for(i = 0 ; i < count ; i++)
			{
				temp_stud[i] = stud[i];
				temp_birthday[i] = birthday[i];
				temp_admission[i] = admission[i];
				temp_info[i] = info[i];
				temp_num[i] = num[i];
			}
			DISPLAY_HEADINGS();
			for(j = 0 ; j < count - 1 ; j++)
			{
				for(k = 0 ; k < count - j - 1 ; k++)
				{
					if(stricmp(temp_stud[k].name,temp_stud[k+1].name) > 0)
					{
						temp1 = temp_stud[k];
						temp_stud[k] = temp_stud[k+1];
						temp_stud[k+1] = temp1;
						temp2 = temp_birthday[k];
						temp_birthday[k] = temp_birthday[k+1];
						temp_birthday[k+1] = temp2;
						temp3 = temp_admission[k];
						temp_admission[k] = temp_admission[k+1];
						temp_admission[k+1] = temp3;
						temp4 = temp_info[k];
						temp_info[k] = temp_info[k+1];
						temp_info[k+1] = temp4;
						temp5 = temp_num[k];
						temp_num[k] = temp_num[k+1];
						temp_num[k+1] = temp5;
					}
				}
			}
			for(i = 0 ; i < count ; i++)
			{
				TEMP_DISPLAY(i);
			}
			printf("\n\nPRESS ENTER TO CONTINUE");
			enter = 0;
			while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					MAIN_DISPLAY();
			}
		}
		else if(get == 51)
		{
			clrscr();
			for(i = 0 ; i < count ; i++)
			{
				temp_stud[i] = stud[i];
				temp_birthday[i] = birthday[i];
				temp_admission[i] = admission[i];
				temp_info[i] = info[i];
				temp_num[i] = num[i];
			}
			DISPLAY_HEADINGS();
			for(j = 0 ; j < count - 1 ; j++)
			{
				for(k = 0 ; k < count - j - 1 ; k++)
				{
					if(stricmp(temp_stud[k].surname,temp_stud[k+1].surname) > 0)
					{
						temp1 = temp_stud[k];
						temp_stud[k] = temp_stud[k+1];
						temp_stud[k+1] = temp1;
						temp2 = temp_birthday[k];
						temp_birthday[k] = temp_birthday[k+1];
						temp_birthday[k+1] = temp2;
						temp3 = temp_admission[k];
						temp_admission[k] = temp_admission[k+1];
						temp_admission[k+1] = temp3;
						temp4 = temp_info[k];
						temp_info[k] = temp_info[k+1];
						temp_info[k+1] = temp4;
						temp5 = temp_num[k];
						temp_num[k] = temp_num[k+1];
						temp_num[k+1] = temp5;
					}
				}
			}
			for(i = 0 ; i < count ; i++)
			{
				TEMP_DISPLAY(i);
			}
			printf("\n\nPRESS ENTER TO CONTINUE");
			enter = 0;
			while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					MAIN_DISPLAY();
			}
		}
		else if(get == 52)
		{
			clrscr();
			for(i = 0 ; i < count ; i++)
			{
				temp_stud[i] = stud[i];
				temp_birthday[i] = birthday[i];
				temp_admission[i] = admission[i];
				temp_info[i] = info[i];
				temp_num[i] = num[i];
			}
			DISPLAY_HEADINGS();
			for(j = 0 ; j < count - 1 ; j++)
			{
				for(k = 0 ; k < count - j - 1 ; k++)
				{
					if(temp_num[k].registration > temp_num[k+1].registration)
					{
						temp1 = temp_stud[k];
						temp_stud[k] = temp_stud[k+1];
						temp_stud[k+1] = temp1;
						temp2 = temp_birthday[k];
						temp_birthday[k] = temp_birthday[k+1];
						temp_birthday[k+1] = temp2;
						temp3 = temp_admission[k];
						temp_admission[k] = temp_admission[k+1];
						temp_admission[k+1] = temp3;
						temp4 = temp_info[k];
						temp_info[k] = temp_info[k+1];
						temp_info[k+1] = temp4;
						temp5 = temp_num[k];
						temp_num[k] = temp_num[k+1];
						temp_num[k+1] = temp5;
					}
				}
			}
			for(i = 0 ; i < count ; i++)
			{
				TEMP_DISPLAY(i);
			}
			printf("\n\nPRESS ENTER TO CONTINUE");
			enter = 0;
			while(enter != 10 || enter!= 13)
			{
				enter = getch();
				if(enter == 10 || enter == 13)
					MAIN_DISPLAY();
			}
		}
		else if(get == 53)
		{
			MENU();
		}
	}
}

/*---------------- FUNCTION DISPLAY_HEADINGS ----------------------*/

void DISPLAY_HEADINGS() //display_1
{
	gotoxy(1,2);
	printf("NAME");
	gotoxy(22,2);
	printf("BIRTHDAY");
	gotoxy(32,2);
	printf("ADMISSION");
	gotoxy(42,2);
	printf("GR NUMBER");
	gotoxy(52,2);
	printf("RECEIPT NO.");
	gotoxy(64,2);
	printf("BRANCH");
	gotoxy(71,2);
	printf("PERCENTAGE");
}

/*--------------------- FUNCTION DISPLAY --------------------------*/

void DISPLAY(int i)//display_name(i)
{
	gotoxy(1,i+4);
	printf("%s %s",stud[i].name,stud[i].surname);
	gotoxy(22,i+4);
	printf("%d-%d-%d",birthday[i].day,birthday[i].month,birthday[i].year);
	gotoxy(32,i+4);
	printf("%d-%d-%d",admission[i].day,admission[i].month,admission[i].year);
	gotoxy(42,i+4);
	printf("%ld",num[i].registration);
	gotoxy(52,i+4);
	printf("%ld",num[i].fee_receipt);
	gotoxy(64,i+4);
	printf("%s",info[i].branch);
	gotoxy(71,i+4);
	printf("%.2f",info[i].percentage);
}

/*--------------------- FUNCTION TEMP_DISPLAY ---------------------*/

void TEMP_DISPLAY(int i)//DISPLAY_T
{
	gotoxy(1,i+4);
	printf("%s %s",temp_stud[i].name,temp_stud[i].surname);
	gotoxy(22,i+4);
	printf("%d-%d-%d",temp_birthday[i].day,temp_birthday[i].month,temp_birthday[i].year);
	gotoxy(32,i+4);
	printf("%d-%d-%d",temp_admission[i].day,temp_admission[i].month,temp_admission[i].year);
	gotoxy(42,i+4);
	printf("%ld",temp_num[i].registration);
	gotoxy(52,i+4);
	printf("%ld",temp_num[i].fee_receipt);
	gotoxy(64,i+4);
	printf("%s",temp_info[i].branch);
	gotoxy(71,i+4);
	printf("%.2f",temp_info[i].percentage);
}

/*--------------------- FUNCTION QUIT -----------------------------*/

void QUIT()
{
	exit();
}