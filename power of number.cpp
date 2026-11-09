#include<stdio.h>
int main()
{
	int base,exponent,i;
	int result=1;
	printf("ENTER THE BASE: ");
	scanf("%d",&base);
	printf("\nENTER THE EXPONENT: ");
	scanf("%d",&exponent);
	if(exponent<0)
	{
		printf("positive exponent");
	}
	else
	{
		for(i=1;i<=exponent;i++)
		{
			result=result*base;
		}
		printf("power=%d\n",result);
	}
	return 0;
}