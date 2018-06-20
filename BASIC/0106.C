//PROGRAM TO FIND FACTORIAL OF NUMBER
//ARGUMENTS AND RETURN VALUE

long int factorial(int);

void main()
{
	int n;
	long int res;
	clrscr();
	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&n);
	res = factorial(n);
	printf("\n\n FACTORIAL OF %d IS %ld",n,res);
	getch();
}

long int factorial(int num)
{
	int i;
	long int fact = 1;

	for(i = 1 ; i <= num ; i++)
	{
		fact = fact * i;
	}
	return fact;
}