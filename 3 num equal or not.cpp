#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter any 3 numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==b&& b==c)
		printf("Equal");
	else
		printf("Not Equal");
	return 0;
}
