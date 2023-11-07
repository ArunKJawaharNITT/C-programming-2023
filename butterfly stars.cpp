#include<stdio.h>
int main()
{
	int n;
	printf("Enter the even no of columns\n");
	scanf("%d",&n);
	for(int i=0;i<(n/2);i++)
	{
		for(int s=0;s<i+1;s++)
		{
			printf("* ");
		}
		for(int b=0;b<(n-2*i-2);b++)
		{
			printf("  ");
		}
		for(int c=0;c<i+1;c++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	for(int a=0;a<(n/2);a++)
	{
		for(int j=0;j<((n/2)-a);j++)
		{
			printf("* ");
		}
		for(int d=0;d<(2*a);d++)
		{
			printf("  ");
		}
		for(int e=0;e<((n/2)-a);e++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
