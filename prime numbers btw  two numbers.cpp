#include<stdio.h>
int main()
{
	int start,end,i,j,count;
	printf("ENTER THE STARTING NUMBRE: ");
	scanf("%d",&start);
	printf("ENTER THE ENDING NUMBER: ");
	scanf("%d",&end);
	printf("\nPRIME NUMBERS ARE: ");
	for(i=start;i<=end;i++)
	{
		count=0;
		if(i>1)
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				printf("%d\n",i);
			}
		}
	}
	return 0;
}