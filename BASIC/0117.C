//ARRAY OF POINTERS

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char *priority[5] = {
				"Studies",
				"Managing Health",
				"Assignments",
				"Hobbies",
				"Entertainment",
			   };

	clrscr();

	printf("\n\n STUDENTS PRIORITY LIST..............");
	printf("\n\n PRIORITY \t TASK");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("\n\n %d \t\t%s",i+1,*(priority+i));
	}
	getch();
}
