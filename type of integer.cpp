#include<stdio.h>
int main()
{
	int n;
	printf("ENTER NUMBER");
	scanf("%d",&n);
	if(n>0)
	{
	printf("POSITIVE NUMBER");
}
	else if(n<0)
{
	printf("NEGITIVE NUMBER");
}
else
{
	printf("ZERO");
}
return 0;
}