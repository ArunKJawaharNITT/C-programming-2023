#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no of rows\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=n-i-1;s>0;s--)
			printf(" ");
		for(int j=0;j<i+1;j++)
			printf("%d ",i+1);
		printf("\n");
	}
}
