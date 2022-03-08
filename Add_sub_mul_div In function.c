void add(int,int);
void sub(int,int);
void mult(int,int);
void div(int,int);
void main()
{
	int a,b;
	printf("Enter first no.");
	scanf("%d",&a);
	printf("Enter second no.");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	mult(a,b);
	div(a,b);
	return ;
}
add(int x, int y)
{
	int z;
	z=x+y;
	printf("This is addition %d\n",z);
	return 0;
}
sub(int x, int y)
{
	int z;
	z=x-y;
	printf("This is subtraction %d\n",z);
	return 0;
}
mult(int x, int y)
{
	int z;
	z=x*y;
	printf("This is multiplication %d\n",z);
	return 0;
}
div(int x, int y)
{
	int z;
	z=x/y;
	printf("This is Division %d \n",z);
	return 0;
}
