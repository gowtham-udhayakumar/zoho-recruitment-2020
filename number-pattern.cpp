#include<stdio.h>
int main()
{
	int num,i,j;
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=num;j>=1;j--)
		{
			if(i>j)
			printf("%d ",i);
			else
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
