#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no of columns\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<n-i;s++)
		{
			printf("  ");
		}
		for(int j=0;j<(2*i)+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
