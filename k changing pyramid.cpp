#include<stdio.h>
int main()
{
	int n;
	int k=0;
	printf("Enter the no of columns\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
			printf("%d ",++k);
		printf("\n");
	}
}
