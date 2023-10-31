#include<stdio.h>
int main()
{
	int n;
	int k=0;
	printf("Enter the no of rows\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
			printf("%d ",++k);
		printf("\n");
	}
}
