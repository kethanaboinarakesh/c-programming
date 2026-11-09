#include<stdio.h>
int main()
{
	int n,i;
	int a=0,b=1,next;
	printf("ENTER THE NUMBER OF TERMS: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a);
		next=a+b;
		a=b;
		b=next;
	}
	return 0;
}