#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter any 3 point value numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b&&a>c)
		printf("%d",a);
	else if(b>c)
		printf("%d",b);
	else if(c>b)
		printf("%d",c);
	else
		printf("%d",c);
	return 0;
}
