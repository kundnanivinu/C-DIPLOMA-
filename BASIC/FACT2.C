//PROGRAM TO FIND FACTORIAL OF NUMBER
//ARGUMENTS AND NO RETURN VALUE

void factorial(int);

void main()
{
	int n;
	clrscr();
	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&n);
	factorial(n);
	getch();
}

void factorial(int num)
{
	int i;
	long int fact = 1;
	for(i = 1 ; i <= num ; i++)
	{
		fact = fact * i;
	}
	printf("\n\n FACTORIAL OF %d IS %ld",num,fact);
}