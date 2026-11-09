#include<stdio.h>
int main()
{
	int a,b,i,gcd;
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("\nenter the second number: ");
	scanf("%d",&b);
	if(a<=0||b<=0)
	{
		printf("enter positive numbers");
	}
	else
	{
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	printf("Gcd=%d",gcd);
}
	return 0;
}