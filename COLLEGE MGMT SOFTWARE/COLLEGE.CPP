/*
	ษออออออออออออออออออออออออออออออออออออออออออออป
	บ         COLLEGE MANAGEMENT SYSTEM          บ
	ศออออออออออออออออออออออออออออออออออออออออออออผ
*/

#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>


/*----------------- FUNCTION PASSWORD ----------------------*/
void password()
{
	fstream file;
	char c;
	char password[32], pass[32];
	int i,j,choice,cnt,k;
	clrscr();
	cout << "-------------------------------------------------";

	for(i=0;i<10;i++)
	{
		cout << "\n|                                               |";
	}

	cout << "\n-------------------------------------------------";

	gotoxy(5,2);
	/*--------------------- ENTERING PASSWORD ----------------------*/
	cout << "\n| ENTER THE PASSWORD : ";

	do
	{
		gotoxy(31,3);
		cnt = 0;
		for(i=0;i<32;i++)
		{
			choice = getch();
			pass[i] = choice;
			pass[i+1] = '\0';
			if(pass[i] != '\r' && pass[i]!= '\b' && pass[i]!= '\n')
				cout << "*";
			else if(pass[i] == '\b')
				cout << "\b \b";
			else if(pass[i] == 10 ||pass[i] == 13)
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
		file.open("E:\\PROGRAMS\\PASSWORD.txt", ios :: in | ios :: nocreate );
		i=0;
		do
		{
			file.get(c);
			password[i] = c;
			i++;
		}while(file);
		file.close();
		password[i-1] = '\0';
		/*------------ COMPARING PASSWORD ------------------*/
		if(strcmp(password,pass) != 0)
		{
			cout << "\n\n| WRONG PASSWORD";
			getch();
			gotoxy(25,3);
			cout << "                  \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			gotoxy(1,4);
			cout << "|                              ";
		}
		else
		{
			cout << "\n\n| CORRECT PASSWORD";
			getch();
		}
	}
	while(strcmp(password,pass) != 0);
}

/*----------------- FUNCTION PASSWORD ----------------------*/
void firstScreen()
{
	clrscr();
	gotoxy(20,24);
	cout << "ษออออออออออออออออออออออออออออออออออออออออออออป";
	gotoxy(20,25);
	cout << "บ         COLLEGE MANAGEMENT SYSTEM          บ";
	gotoxy(20,26);
	cout << "ศออออออออออออออออออออออออออออออออออออออออออออผ";

	gotoxy(1,30);
	cout << "LOADING........";
	gotoxy(1,32);
	cout << "ษออออออออออป";
	gotoxy(1,34);
	cout << "ศออออออออออผ";
	gotoxy(1,33);
	cout << "บ";
	gotoxy(12,33);
	cout << "บ";
	gotoxy(12,32);
	for(int i = 1 , j = 10 ; i < 12 ; i++ , j += 10)
	{
		delay(1000);
		if(i < 11)
		{
			gotoxy(i+1,33);
			cout << "Û";
		}
		gotoxy(15,33);
		cout << j << "%";
	}
}
class Staff
{
	protected:
		int empId;
		float salary;
		char status;
};

class Student
{
	protected:
		int rollNo;
		float percentage;
		char *project;
		char *course;
};

class College : public Staff, public Student
{
	protected:
		char *name;
		long int ph_no;
		char *address;
		int date;
		int month;
		int year;
		int age;
		char sex;

	public :
		virtual void display() = 0;
		virtual void menu() = 0;
};

class Teacher : public College
{
	private:
		char *subject;
	public:
		void menu()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tMARKS";
			gotoxy(20,26);
			cout<<"2.\tATTENDANCE";
			gotoxy(20,28);
			cout<<"3.\tPROJECTS";
			gotoxy(20,30);
			cout<<"4.\tDISPLAY RECORDS";
			gotoxy(20,32);
			cout<<"5.\tMAIN MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					marks();
				break;
				case 2:
					attendance();
				break;
				case 3:
					project();
				break;
				case 4:
					display();
				break;
				default:
					return;
				break;
			}
		}
		void display()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tMY INFORMATION";
			gotoxy(20,26);
			cout<<"2.\tPERSONAL INFORMATION OF STUDENTS";
			gotoxy(20,28);
			cout<<"3.\tACADEMIC INFORMATION OF STUDENTS";
			gotoxy(20,30);
			cout<<"4.\tATTENDANCE OF STUDENTS ";
			gotoxy(20,32);
			cout<<"5.\tDISPLAY MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					tInfo();
				break;
				case 2:
					s_pInfo();
				break;
				case 3:
					s_mInfo();
				break;
				case 4:
					s_aInfo();
				break;
				default:
					display();
				break;
			}
		}
};

class Head : public College
{
	private:
		char *designation;
		float income;
		float expenditure;
	public:
		void menu()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tSALARY";
			gotoxy(20,26);
			cout<<"2.\tBILLS";
			gotoxy(20,28);
			cout<<"3.\tINCOME";
			gotoxy(20,30);
			cout<<"4.\tDISPLAY RECORDS";
			gotoxy(20,32);
			cout<<"5.\tMAIN MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					salary();
				break;
				case 2:
					bills();
				break;
				case 3:
					income();
				break;
				case 4:
					display();
				break;
				default:
					return;
				break;
			}

		}
		void display()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tDETAILS OF TEACHERS";
			gotoxy(20,26);
			cout<<"2.\tDETAILS OF NON-TEACHING STAFF";
			gotoxy(20,28);
			cout<<"3.\tDETAILS OF STUDENTS";
			gotoxy(20,30);
			cout<<"4.\tACCOUNTS";
			gotoxy(20,32);
			cout<<"5.\tDISPLAY MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					teacher();
				break;
				case 2:
					staff();
				break;
				case 3:
					student();
				break;
				case 4:
					account();
				break;
				default:
					display();
				break;
			}
		}
};

class Library : public College
{
	private:
		int bookId;
		char *bookName;
		char *author;
		char *category;
		char *publication;
		float price;
		int libraryId;
	public:
		void menu()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tDETAILS OF BOOKS";
			gotoxy(20,26);
			cout<<"2.\tBOOKS ISSUED";
			gotoxy(20,28);
			cout<<"3.\tBOOKS CLAIMED";
			gotoxy(20,30);
			cout<<"4.\tDISPLAY RECORDS";
			gotoxy(20,32);
			cout<<"5.\tMAIN MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					available();
				break;
				case 2:
					issued();
				break;
				case 3:
					claimed();
				break;
				case 4:
					display();
				break;
				default:
					return;
				break;
			}

		}
		void display()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tDETAILS OF BOOKS";
			gotoxy(20,26);
			cout<<"2.\tBOOKS ISSUED";
			gotoxy(20,28);
			cout<<"3.\tBOOKS CLAIMED";
			gotoxy(20,30);
			cout<<"4.\tLIST OF STUDENTS";
			gotoxy(20,32);
			cout<<"5.\tDISPLAY MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					dAvailable();
				break;
				case 2:
					dIssued();
				break;
				case 3:
					dClaimed();
				break;
				case 4:
					dStudent();
				break;
				default:
					display();
				break;
			}

		}
};

class Office : public College
{
	private:
		char *department;
	public:
		void menu()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tTEACHER'S RECORDS";
			gotoxy(20,26);
			cout<<"2.\tSTUDENT'S RECORDS";
			gotoxy(20,28);
			cout<<"3.\tINCOME AND EXPENDITURE";
			gotoxy(20,30);
			cout<<"4.\tDISPLAY RECORDS";
			gotoxy(20,32);
			cout<<"5.\tMAIN MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					tPersonal();
				break;
				case 2:
					sPersonal();
				break;
				case 3:
					accounts();
				break;
				case 4:
					display();
				break;
				default:
					return;
				break;
			}

		}
		void display()
		{
			clrscr();
			int ch = 0;
			gotoxy(20,24);
			cout<<"1.\tMY DETAILS";
			gotoxy(20,26);
			cout<<"2.\tDETAILS OF TEACHERS";
			gotoxy(20,28);
			cout<<"3.\tDETAILS OF STUDENTS";
			gotoxy(20,30);
			cout<<"4.\tACCOUNTS";
			gotoxy(20,32);
			cout<<"5.\tDISPLAY MENU";
			gotoxy(20,35);
			cout<<"ENTER YOUR CHOICE :\t";
			cin>>ch;
			switch(ch)
			{
				case 1:
					sInfo();
				break;
				case 2:
					teacher();
				break;
				case 3:
					student();
				break;
				case 4:
					account();
				break;
				default:
					display();
				break;
			}
};

void quit()
{
	clrscr();
	cout<<"\n\nBYE....";
	delay(1000);
	exit();
}

void main()
{
	Staff *ptr;

	password();
	firstScreen();

	Teacher t;
	Office o;
	Library l;
	Head h;
	int choice;
	do
	{
		clrscr();
		gotoxy(20,22);
		cout<<"1.\tHEAD";
		gotoxy(20,24);
		cout<<"2.\tTEACHER";
		gotoxy(20,26);
		cout<<"3.\tOFFICE STAFF";
		gotoxy(20,28);
		cout<<"4.\tLIBRARIAN";
		gotoxy(20,30);
		cout<<"5.\tEXIT";
		choice = 0;
		gotoxy(20,34);
		cout<<"ENTER YOUR CHOICE :\t";
		cin>>choice;
		switch(choice)
		{
			case 1:
				ptr = &h;
			break;
			case 2:
				ptr = &t;
			break;
			case 3:
				ptr = &o;
			break;
			case 4:
				ptr = &l;
			break;
			case 5:
				quit();
			break;
		};
		if(choice > 0 && choice < 5)
			ptr -> menu();
	}while(choice != 5);
	getch();
}
