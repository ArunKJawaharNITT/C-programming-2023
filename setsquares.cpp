
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the even no of columns\n");
	scanf("%d",&n);
	for(int i=0;i<(n/2);i++)
	{
		for(int c=0;c<i+1;c++)
		{
			printf("  ");
		}
		for(int s=0;s<(n/2-i);s++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	for(int a=0;a<(n/2);a++)
	{
		for(int b=0;b<((n/2)-a);b++)
		{
			printf("  ");
		}
		for(int j=0;j<a+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
