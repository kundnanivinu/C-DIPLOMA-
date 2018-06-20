//PROGRAM TO FIND FACTORIAL OF NUMBER
//NO ARGUMENTS AND RETURN VALUE

long int factorial();

void main()
{
	extern int n;
	long int res;
	clrscr();
	res = factorial();
	printf("\n\n FACTORIAL OF %d IS %ld",n,res);
	getch();
}
int n;
long int factorial()
{
	int i;
	long int fact = 1;
	printf("\n\n ENTER THE NUMBER:\t");
	scanf("%d",&n);

	for(i = 1 ; i <= n ; i++)
	{
		fact = fact * i;
	}
	return fact;
}