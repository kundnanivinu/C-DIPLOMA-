/*----------------------- TIC-TAC-TOE GAME ----------------------------*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>

/*------------------------ GLOBAL DECLARATION ------------------------*/

char array[3][3];
int r_no;
int c_no;
int player = 1;

/*------------------------- FUNCTIONS --------------------------------*/

void first_screen();
int getkey();
void menu();
void instructions();
void drawboard();
void input();
int check();
int wincheck_1();
int wincheck_2();
int check_space();
void quit();

/*----------------------- FUNCTION MAIN ------------------------------*/

void main()
{
	int n;
	first_screen();
	getch();
}

/*----------------------- FUNCTION FIRST_SCREEN ------------------------------*/

void first_screen()
{
	int n,i,j;
	clrscr();
	printf("\n");
	textbackground(6);
	clrscr();
	gotoxy(6,11);
	textcolor(4 + BLINK);
	cprintf("*       *       * ******* *       ******* ******** *     * *******");
	gotoxy(6,13);
	textcolor(2 + BLINK);
	cprintf(" *       *     *  *       *       *       *      * * * * * *");
	gotoxy(6,15);
	textcolor(5 + BLINK);
	cprintf("  *   *   *   *   ******* *       *       *      * *  *  * *******");
	gotoxy(6,17);
	textcolor(2 + BLINK);
	cprintf("   * *     * *    *       *       *       *      * *     * *");
	gotoxy(6,19);
	textcolor(4 + BLINK);
	cprintf("    *       *     ******* ******* ******* ******** *     * *******");
	gotoxy(1,22);
	textcolor(2);
	cprintf("\rLOADING........\n\r");
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,187);
	cprintf("\n\n\r%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,188);
	gotoxy(1,24);
	cprintf("%c",186);
	gotoxy(12,24);
	cprintf("%c",186);
	textcolor(5);
	gotoxy(12,23);
	for(i = 1 , j = 10 ; i < 12 ; i++ , j += 10)
	{
		delay(1000);
		if(i < 11)
		{
			gotoxy(i+1,24);
			cprintf("%c",219);
		}
		gotoxy(15,24);
		cprintf("%d%%",j);
	}
	textbackground(1 + BLINK);
	clrscr();
	textcolor(5 + BLINK);
	cprintf("\n\r       _____  _____   ___  _____    _    ___  _____   ___    ___");
	textcolor(3 + BLINK);
	cprintf("\n\r         |      |    |       |     / \\  |       |    |   |  |   ");
	textcolor(4 + BLINK);
	cprintf("\n\r         |      |    |    -  |    /---\\ |    -  |    |   |  |---");
	textcolor(6 + BLINK);
	cprintf("\n\r         |    __|__  |___    |   /     \\|___    |    |___|  |___");
	cprintf("\n\n\n\r");
	textcolor(6);
	gotoxy(19,8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,203,205,205,205,205,205,203,205,205,205,205,205,187);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,206,205,205,205,205,205,206,205,205,205,205,205,185);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,206,205,205,205,205,205,206,205,205,205,205,205,185);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c     %c     %c     %c",186,186,186,186);
	cprintf("\n\r                  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,202,205,205,205,205,205,202,205,205,205,205,205,188);
	gotoxy(1,23);
	textcolor(2);
	cprintf("\r PRESS ENTER TO CONTINUE");
	cprintf("\n\r PRESS ESC TO QUIT");
	textcolor(3);
	gotoxy(21,9);
	cprintf("\\ /");
	gotoxy(21,10);
	cprintf(" X ");
	gotoxy(21,11);
	cprintf("/ \\");
	gotoxy(33,9);
	cprintf("\\ /");
	gotoxy(33,10);
	cprintf(" X ");
	gotoxy(33,11);
	cprintf("/ \\");
	textcolor(4);
	gotoxy(26,13);
	cprintf("%c%c%c%c%c",218,196,196,196,191);
	gotoxy(26,14);
	cprintf("%c   %c",179,179);
	gotoxy(26,15);
	cprintf("%c%c%c%c%c",192,196,196,196,217);
	gotoxy(20,17);
	cprintf("%c%c%c%c%c",218,196,196,196,191);
	gotoxy(20,18);
	cprintf("%c   %c",179,179);
	gotoxy(20,19);
	cprintf("%c%c%c%c%c",192,196,196,196,217);
	gotoxy(19,24);
	n = getkey();
	if(n == 28)
		menu();
	else if(n == 1)
		quit();
	getch();
	menu();
}

/*----------------------- FUNCTION GETKEY ------------------------------*/

int getkey()
{
	union REGS i,o;
	while(!kbhit());
	i.h.ah = 0;
	int86(22,&i,&o);
	return (o.h.ah);
}

/*----------------------- FUNCTION MENU ------------------------------*/

void menu()
{
	int choice;
	textbackground(3);
	clrscr();
	textcolor(5);
	cprintf("\n\r       _____  _____   ___  _____    _    ___  _____   ___    ___");
	textcolor(6);
	cprintf("\n\r         |      |    |       |     / \\  |       |    |   |  |   ");
	textcolor(4);
	cprintf("\n\r         |      |    |    -  |    /---\\ |    -  |    |   |  |---");
	textcolor(1);
	cprintf("\n\r         |    __|__  |___    |   /     \\|___    |    |___|  |___");
	cprintf("\n\n\n\r");
	textcolor(1 + BLINK);
	cprintf("\n\n\n\n\r                                F1.  ");
	textcolor(4);
	cprintf("HOW TO PLAY");
	textcolor(1 + BLINK);
	cprintf("\n\n\n\n\r                                F2.  ");
	textcolor(4);
	cprintf("PLAY THE GAME");
	textcolor(1 + BLINK);
	cprintf("\n\n\n\n\r                                ESC. ");
	textcolor(4);
	cprintf("QUIT");
	choice = getkey();
	switch(choice)
	{
		case 59:
		{
			instructions();
			break;
		}
		case 60:
		{
			drawboard();
			break;
		}
		case 1:
		{
			quit();
			break;
		}
		default:
		{
			menu();
			break;
		}
	}
}

/*----------------------- FUNCTION INSTRUCTIONS ------------------------------*/

void instructions()
{
	int n;
	textbackground(2);
	clrscr();
	textcolor(5);
	cprintf("\n\n\n\n\n\r");
	cprintf("\n\r   _     ___   ___  .   .  _____  _____   .   .  ___   ___    _    .    .  ___");
	textcolor(1);
	cprintf("\n\r  / \\   |   | |   | |   |    |      |     |   | |     |      / \\   |\\  /| |");
	textcolor(5);
	cprintf("\n\r /---\\  |---: |   | |   |    |      |     |---| |---  |  -  /---\\  | \\/ | |---");
	textcolor(1);
	cprintf("\n\r/     \\ |___| |___| |___|    |      |     |   | |___  |__| /     \\ |    | |___");
	textcolor(4);
	cprintf("\n\n\n\n\r%c   MOVE USING ARROW KEYS",2);
	cprintf("\n\n\r%c   PRESS ENTER TO MARK 'X' OR 'O' ON BOARD",2);
	cprintf("\n\n\r%c   FOR PLAYER 1 'X' IS DISPLAYED ON MOVE",2);
	cprintf("\n\n\r%c   FOR PLAYER 2 'O' IS DISPLAYED ON MOVE",2);
	cprintf("\n\n\n\n\n\r");
	textcolor(7 + BLINK);
	gotoxy(1,24);
	cprintf("\rPRESS ESC TO GO TO MENU");
	n = getkey();
	if(n == 1)
	{
		menu();
	}
	else
	{
		instructions();
	}
}

/*----------------------- FUNCTION DRAWBOARD ------------------------------*/

void drawboard()
{
	int i,j;
	textbackground(4);
	clrscr();
	textcolor(3);
	gotoxy(27,2);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,187);
	gotoxy(27,3);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,4);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,5);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,6);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,7);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,185);
	gotoxy(27,9);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,10);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,11);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,12);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,13);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,14);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,185);
	gotoxy(27,15);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,16);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,17);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,18);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,19);
	cprintf("%c       %c       %c       %c",186,186,186,186);
	gotoxy(27,20);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,188);
	gotoxy(1,1);
	textcolor(7);
	cprintf("PLAYER 1..........");
	r_no = 0;
	c_no = 0;
	gotoxy(30+(c_no*8),4+(r_no*6));
	player = 1;
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
			array[i][j] = '\0';
		}
	}
	input();
}

/*----------------------- FUNCTION INPUT ------------------------------*/

void input()
{
	int get,i,n,j,k;
	get = 0;
	while(1)
	{
		get = getkey();
		if(get == 28 || get == 1)
			break;
		else if(get == 77 && c_no < 2)  //SCAN CODE FOR RIGHT KEY
		{
			if(array[r_no][c_no + 1] == '\0')
			{
				c_no++;
			}
			else if(c_no == 0 && array[r_no][c_no + 2] == '\0')
			{
				c_no += 2;
			}
			else
			{
				for(j = 0 ; j < 3 ; j++)
				{
					for(k = 0 ; k < 3 ; k++)
					{
						if(array[j][k] == '\0' && array[r_no][c_no] != array[j][k])
						{
							r_no = j;
							c_no = k;
						}
					}
				}
			}
		}
		else if(get == 75 && c_no > 0)  //SCAN CODE FOR LEFT KEY
		{
			if(array[r_no][c_no - 1] == '\0')
			{
				c_no--;
			}
			else if(c_no == 2 && array[r_no][c_no - 2] == '\0')
			{
				c_no -= 2;
			}
			else
			{
				for(j = 0 ; j < 3 ; j++)
				{
					for(k = 0 ; k < 3 ; k++)
					{
						if(array[j][k] == '\0'&& array[r_no][c_no] != array[j][k])
						{
							r_no = j;
							c_no = k;
						}
					}
				}
			}
		}
		else if(get == 72 && r_no > 0)  //SCAN CODE FOR UP KEY
		{
			if(array[r_no - 1][c_no] == '\0')
			{
				r_no--;
			}
			else if(r_no == 2 && array[r_no - 2][c_no] == '\0')
			{
				r_no -= 2;
			}
			else
			{
				for(j = 0 ; j < 3 ; j++)
				{
					for(k = 0 ; k < 3 ; k++)
					{
						if(array[j][k] == '\0' && array[r_no][c_no] != array[j][k])
						{
							r_no = j;
							c_no = k;
						}
					}
				}
			}
		}
		else if(get == 80 && r_no < 2)  //SCAN CODE FOR DOWN KEY
		{
			if(array[r_no + 1][c_no] == '\0')
			{
				r_no++;
			}
			else if(r_no == 0 && array[r_no + 2][c_no] == '\0')
			{
				r_no += 2;
			}
			else
			{
				for(j = 0 ; j < 3 ; j++)
				{
					for(k = 0 ; k < 3 ; k++)
					{
						if(array[j][k] == '\0' && array[r_no][c_no] != array[j][k])
						{
							r_no = j;
							c_no = k;
						}
					}
				}
			}
		}
		gotoxy(30+(c_no*8),4+(r_no*6));
	}
	if(get == 1)
	{
		menu();
	}
	else if(get == 28)
	{
		if(player == 1 && array[r_no][c_no] == '\0')
		{
			textcolor(2);
			gotoxy(30+(c_no*8),4+(r_no*6));
			cprintf("\\ /");
			gotoxy(30+(c_no*8),5+(r_no*6));
			cprintf(" X ");
			gotoxy(30+(c_no*8),6+(r_no*6));
			cprintf("/ \\");
			array[r_no][c_no] = 'X';
			player = 2;
		}
		else if(player == 2 && array[r_no][c_no] == '\0')
		{
			textcolor(6);
			gotoxy(29+(c_no*8),4+(r_no*6));
			cprintf("%c%c%c%c%c",218,196,196,196,191);
			gotoxy(29+(c_no*8),5+(r_no*6));
			cprintf("%c   %c",179,179);
			gotoxy(29+(c_no*8),6+(r_no*6));
			cprintf("%c%c%c%c%c",192,196,196,196,217);
			array[r_no][c_no] = 'O';
			player = 1;
		}
		n = check();
		if(n == 1)
		{
			textcolor(3 + BLINK);
			gotoxy(1,24);
			cprintf("PLAYER 1 WINS !!");
			delay(1500);
			menu();
		}
		else if(n == 2)
		{
			textcolor(3 + BLINK);
			gotoxy(1,24);
			cprintf("PLAYER 2 WINS !!");
			delay(1500);
			menu();
		}
		else if(n == 3)
		{
			textcolor(3 + BLINK);
			gotoxy(1,24);
			cprintf("GAME OVER !!");
			delay(1000);
			menu();
		}
		else if(n == 0)
		{
			delay(200);
			if(player == 1)
			{
				gotoxy(1,1);
				textcolor(7);
				cprintf("PLAYER 1.........");
			}
			else
			{
				gotoxy(1,1);
				textcolor(0);
				cprintf("PLAYER 2.........");
			}
			gotoxy(30+(c_no*8),4+(r_no*6));
			input();
		}
	}
}

/*----------------------- FUNCTION CHECK ------------------------------*/

int check()
{
	if(wincheck_1())
		return 1;
	else if(wincheck_2())
		return 2;
	else if(check_space())
		return 3;
	return 0;
}

/*----------------------- FUNCTION WINCHECK_1 ------------------------------*/

int wincheck_1()
{
	if(array[0][0]=='X' && array[0][1]=='X' && array[0][2]=='X')
		return 1;
	else if(array[1][0]=='X' && array[1][1]=='X' && array[1][2]=='X')
		return 1;
	else if(array[2][0]=='X' && array[2][1]=='X' && array[2][2]=='X')
		return 1;
	else if(array[0][0]=='X' && array[1][0]=='X' && array[2][0]=='X')
		return 1;
	else if(array[0][1]=='X' && array[1][1]=='X' && array[2][1]=='X')
		return 1;
	else if(array[0][2]=='X' && array[1][2]=='X' && array[2][2]=='X')
		return 1;
	else if(array[0][0]=='X' && array[1][1]=='X' && array[2][2]=='X')
		return 1;
	else if(array[0][2]=='X' && array[1][1]=='X' && array[2][0]=='X')
		return 1;
	return 0;
}

/*----------------------- FUNCTION WINCHECK_2 ------------------------------*/

int wincheck_2()
{
	if(array[0][0]=='O' && array[0][1]=='O' && array[0][2]=='O')
		return 1;
	else if(array[1][0]=='O' && array[1][1]=='O' && array[1][2]=='O')
		return 1;
	else if(array[2][0]=='O' && array[2][1]=='O' && array[2][2]=='O')
		return 1;
	else if(array[0][0]=='O' && array[1][0]=='O' && array[2][0]=='O')
		return 1;
	else if(array[0][1]=='O' && array[1][1]=='O' && array[2][1]=='O')
		return 1;
	else if(array[0][2]=='O' && array[1][2]=='O' && array[2][2]=='O')
		return 1;
	else if(array[0][0]=='O' && array[1][1]=='O' && array[2][2]=='O')
		return 1;
	else if(array[0][2]=='O' && array[1][1]=='O' && array[2][0]=='O')
		return 1;
	return 0;
}

/*----------------------- FUNCTION CHECK_SPACE ------------------------------*/

int check_space()
{
	int cnt,i,j;
	cnt = 0;
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3; j++)
		{
			if(array[i][j] != '\0')
				cnt++;
		}
	}
	if(cnt == 9)
		return 1;
	else
		return 0;
}

/*----------------------- FUNCTION QUIT ------------------------------*/

void quit()
{
	exit();
}
