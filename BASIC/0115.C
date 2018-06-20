/* POINTER ARITHMETIC */

/* when a pointer is incremented or decremented, it gets increased or decreased by the amount equal to the size of data type of the pointer */

/* 

ptr = &var;

ptr ± 1 = ptr ± 1 * sizeof(var);
ptr ± 2 = ptr ± 2 * sizeof(var);
.....
.....
ptr ± n = ptr ± n * sizeof(var);

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch; 	// assume 65224
	int i;	// should be 65222
	long l;
	float f;
	double d;

	char *ch_ptr = &ch;
	int *i_ptr = &i;
	long *l_ptr = &l;
	float *f_ptr = &f;
	double *d_ptr = &d;

	clrscr();

	printf("\n\nch_ptr = &ch,i_ptr = &i,l_ptr = &l,f_ptr = &f,d_ptr = &d");
	printf("\n\n&ch = %u,&i =  %u,&l = %u,&f = %u,&d = %u",&ch,&i,&l,&f,&d);
	printf("\n\nch_ptr = %u,i_ptr =  %u,l_ptr = %u,f_ptr = %u,d_ptr = %u",ch_ptr,i_ptr,l_ptr,f_ptr,d_ptr);
	ch_ptr++;
	i_ptr++;
	l_ptr++;
	d_ptr++;
	f_ptr++;
	printf("\n\nADD 1 TO EACH POINTER.");
	printf("\n\nch_ptr = %u,i_ptr =  %u,l_ptr = %u,f_ptr = %u,d_ptr = %u",ch_ptr,i_ptr,l_ptr,f_ptr,d_ptr);
	ch_ptr-=2;
	i_ptr-=2;
	l_ptr-=2;
	d_ptr-=2;
	f_ptr-=2;
	printf("\n\nSUBTRACT 2 FROM EACH POINTER.");
	printf("\n\nch_ptr = %u,i_ptr =  %u,l_ptr = %u,f_ptr = %u,d_ptr = %u",ch_ptr,i_ptr,l_ptr,f_ptr,d_ptr);
	getch();
}
