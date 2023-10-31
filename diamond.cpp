#include<stdio.h>
int main()
{
	int n;
	printf("Enter no of rows\n");
	scanf("%d",&n);
	for(int i=0;i<n/2+1;i++)
	{
		for(int s=n/2-i;s>=0;s--)
			printf("  ");
		for(int j=0;j<2*i+1;j++)
			printf("* ");
		printf("\n");
	}
	for( int i=0;i<n/2;i++)
	{
		for(int s=0;s<i+2;s++)
			printf("  ");
		for(int j=0;j<n-2*i-2;j++)
			printf("* ");
		printf("\n");
	}
}
