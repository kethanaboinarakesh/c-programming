#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("ENTETR THE NUMBER: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("NOT A PERFCT NUMBER");
	}
	for(i=1;i<=n;i++)
	{
		n%i==0;
		sum=sum+i;
}
   if(sum=n)
   {
   	printf("prime number");
   }
   else
   {
   printf("not a perfect number");
}
 return 0;
}