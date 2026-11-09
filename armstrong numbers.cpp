#include<stdio.h>
int main()
{
int n, original, digit;
int sum=0,count=0,temp,power,i;
printf("enter the number: ");
scanf("%d",&n);
if(n<0)
{
	printf("not an armstrong number");
	return 0;
}
  original=n;
  temp=n;
  do
  {
  	count++;
  	temp=temp/10;
  }
  while(temp!=0);
  temp=n;
  {
  	digit=temp%10;
  	power=1;
  	for(i=1;i<=n;i++)
  	{
  		power=power*digit;
	  }
	  sum=sum+power;
	  temp=temp/10;
  }
  if(sum=original){
  printf("amrstrong number");
  }
  else
  {
  	printf("not amrstrong number");
  }
  return 0;
}