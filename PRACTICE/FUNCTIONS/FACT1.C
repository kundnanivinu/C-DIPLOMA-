//PROGRAM TO FIND FACTORIAL OF NUMBER
//NO ARGUMENTS AND NO RETURN VALUE

void factorial();

void main()
{
	clrscr();
	factorial();
	getch();
}

void factorial()
{
	int i;
	int n;
	long int fact = 1;
	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&n);

	for(i = 1 ; i <= n ; i++)
	{
		fact = fact * i;
	}
	printf("\n\n FACTORIAL OF %d IS %ld",n,fact);
}