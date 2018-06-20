//POINTER ARITHMETIC

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch,*ch_ptr;
	int i,*i_ptr;
	long l,*l_ptr;
	float f,*f_ptr;
	double d,*d_ptr;
	ch_ptr = &ch;
	i_ptr = &i;
	l_ptr = &l;
	f_ptr = &f;
	d_ptr = &d;

	clrscr();

	printf("\n ch_ptr = &ch \n i_ptr = &i \n l_ptr = &l \n f_ptr = &f \n d_ptr = &d");
	printf("\n ch_ptr = %u \n i_ptr = %u \n l_ptr = %u \n f_ptr = %u \n d_ptr = %u",ch_ptr,i_ptr,l_ptr,f_ptr,d_ptr);
	printf("\n\n ADD 1 TO EACH POINTER");
	ch_ptr++;
	i_ptr++;
	l_ptr++;
	f_ptr++;
	d_ptr++;
	printf("\n ch_ptr = %u \n i_ptr = %u \n l_ptr = %u \n f_ptr = %u \n d_ptr = %u",ch_ptr,i_ptr,l_ptr,f_ptr,d_ptr);
	printf("\n\n SUBTRACT 2 FROM EACH POINTER");
	ch_ptr-=2;
	i_ptr-=2;
	l_ptr-=2;
	f_ptr-=2;
	d_ptr-=2;
	printf("\n ch_ptr = %u \n i_ptr = %u \n l_ptr = %u \n f_ptr = %u \n d_ptr = %u",ch_ptr,i_ptr,l_ptr,f_ptr,d_ptr);
	getch();
}