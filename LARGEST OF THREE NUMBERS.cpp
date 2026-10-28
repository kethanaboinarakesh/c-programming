#include<stdio.h>
int main()
{
	int a , b , c;
	printf("ENTER NUMBERS:");
	scanf("%d %d %d",&a ,&b, &c);
	if (a>b&&a>c)
	{
		printf("'a'is LARGEST NUMBER");
	}
	else if(b>a&&b>c)
	{
		printf("'b' is LARGEST NUMBER");
	}
	else
	{
		printf("'c' is LARGEST NUMBER");
	}
	return 0;
}