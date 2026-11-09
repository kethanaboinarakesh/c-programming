#include<stdio.h>
int main()
{
	int n,i=1;
	long int fact=1;
	printf("ENTER ANY NUMBER: ");
	scanf("%d",&n);
	if(i<0)
	{
	printf("FECTORIAL IS NOT DEFINED FOR NEGATIVE NUMBERS");
}
else
{
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("FACTORIAL=%d",fact);
}
return 0;
}