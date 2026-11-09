#include<stdio.h>
int main()
{
  int n,original,digit,reverse=0;
  printf("ENTER ANY NUMBER: ");
  scanf("%d",&n);
  original=n;
  if(n<=0)
  {
  	printf("NOT A PALLINDROME");
	   } 
	   while(n!=0)
	   {
	   digit=n%10;
	   reverse=reverse*10+digit;
	   n=n/10;
}
     if(reverse=original)
     {
     	printf("given number is a pallindrome");
	 }
	 else
	 {
	 	printf("given number is not a pallindrome");
	 }
	 return 0;
}