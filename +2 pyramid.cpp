#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no of rows\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
			printf("%d ",i+3);
		printf("\n");
	}
	for(int a=n;a>0;a--)
	{
		for(int b=a;b>0;b--)
			printf("%d ",a+2);
		printf("\n");
	}
	
}
