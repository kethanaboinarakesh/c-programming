#include<stdio.h>
int main()
{
	int a,b,lcm,i,max;
	printf("ENTER THE FIRST NUMBER: ");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER: ");
	scanf("%d",&b);
	max=(a>b)?a:b;
	if(a<=0||b<=0)
	{
		printf("enter positive numbers: ");
	}
	else
	{
		for(i=max;;i++)
		{
			if(i%a==0&&i%b==0)
			{
				lcm=i;
				break;
			}
		}
		printf("LCM=%d",lcm);
	}
	return 0;
}