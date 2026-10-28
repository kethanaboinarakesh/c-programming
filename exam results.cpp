#include<stdio.h>
int main()
{
	int n;
	printf("ENTER YOUR MARKS");
	scanf("%d",&n);
	if(n>=19)
	{
		printf("YOU PASSED THE EXAM");
	}
	else
	{
		printf("YOU FIALED, NO PROBLEM BETTER LUCK NEXT TIME");
	}
	return 0;
}