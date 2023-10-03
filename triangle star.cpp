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
		printf("\n");
		
	}
	for(int a=0;a<(n/2);a++)
	{
		for(int j=0;j<n-a;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
