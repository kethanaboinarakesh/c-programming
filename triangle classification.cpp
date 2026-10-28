#include<stdio.h>
int main()
{
	int a ,b ,c;
	printf(" ENTER THREE SIDES OF TRIANGLE:");
	scanf("%d%d%d",&a ,&b ,&c);
	if(a<=0||b<=0||c<=0||a+b<c||c+b<a||a+c<b)
	{
		printf("INVALID SIDES OF TRIANGLE:");
	}
	else if(a==b&&b==c)
	{
		printf("equilator triangle");
	}
	else if(a==b||b==c||a==c)
	{
		printf("isosceles triangle");
	}
	else
	{
	printf("scalen triangle");
}
return 0;
}