#include<stdio.h>
int main()
{
	int n,i=1;
	printf("ENTER ANY NUMBER: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d", i*i);
	}
	return 0;
}