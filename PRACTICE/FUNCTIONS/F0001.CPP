//PROGRAM FOR GLOBAL AND LOCAL VARIABLES


#include<stdio.h>
#include<conio.h>

void func1(); 		//FUNCTION DECLARATION
void func2();           //FUNCTION DECLARATION
void func3();           //FUNCTION DECLARATION

int max=100; 		//GLOBAL VARIABLE DECLARATION
void main()
{
	int a,b;		//LOCAL OR AUTOMATIC VARIABLE DECLARATON
	clrscr();
	a=5,b=6;
	printf("\n\nVALUE OF A IS : %d",a);
	printf("\n\nVALUE OF B IS : %d",b);
	func1(); 		//FUNCTION CALL
	func2();                //FUNCTION CALL
	func3();                //FUNCTION CALL
	getch();
}
void func1() 			//FUNCTION DEFINITION
{
	int c;
	c=35;
	printf("\n\n MAX IN FUNCTION 1 : %d",max);
	max+=200;
	printf("\n\nMAX : %d",max);
	printf("\n\nVALUE OF C IS : %d ",c);
}
extern d=250; 		//EXTERN VARIABLE DECLARATION
void func2() 		//FUNCTION DEFINITION
{
	printf("\n\nVALUE OF EXTERN VARIABLE D IN FUNCTION 2 IS :%d",d);
}
void func3()  		//FUNCTION DEFINITION
{
	d+=max;
	printf("\n\nVALUE OF EXTERN VARIABLE D IN FUNCTION 3 IS :%d",d);
	max*=d;
	printf("\n\n MAX IN FUNCTION 3 : %d",max);
}



