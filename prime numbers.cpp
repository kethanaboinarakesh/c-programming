#include<stdio.h>
int main()
{
	int n,i,rak=0;
	printf("ENTER ANY NUMBER: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("not a prime number");
	}
	for(i=1;i<=n;i++)
	{
		n%i==0;
		rak++;
	}
	if(rak=2)
	{
		printf("prime number");
	}
	else
	{
	printf("not a prime number");
}
    return 0;
}