#include<stdio.h>
int main()
{
	float a, b;
	char op;
	
	printf("ENTER ANY OPERETOR(+,-,*,/):");
	scanf("%c", &op);
	
	printf("ENTER TWO NUMBERS:");
	scanf("%f %f",&a ,&b);
	
	if(op== '+')
	{
		printf("result=%.2f", a+b);
	}
	else if(op=='-')
	{
		printf("result=%.2f", a-b);
	}
	else if(op=='*')
	{
		printf("result=%.2f", a*b);
	}
	else if(op=='/')
	{
		if(b!=0)
		{
			printf("result=%.2f",a/b);
		}
		else
		{
			printf("cannot be divided by zero");
		}
	}
		else
		{
			printf("invalid operator");
		}
	return 0;
}