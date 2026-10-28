#include<stdio.h>
int main()
{
	int n;
	printf("ENTER YOUR PERCENTAGE");
	scanf("%d",&n);
	if(n>=80)
	{
		printf("GREAT YOU GOT 'A' GARDE ");
	}
	else if(n<80&&n>=60)
	{
	printf("WELL DONE YOU GOT 'B' GRADE");
}
    else if(n<60&&n>=30)
    {
    	printf("NICE TRY YOU GOT 'C' GRADE");
	}
	else
	{
	printf("YOU FAILED, BETTER LUCK NEXT TIME MY DEAR");
}
}