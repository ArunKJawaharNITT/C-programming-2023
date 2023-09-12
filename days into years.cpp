#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	printf("Enter any number of days\n");
	scanf("%d",&a);
	b=a%365;
	c=a/365;
	d=b%30;
	e=b/30;
	printf("So it has been %d years %d months and %d days",c,e,d);
	return 0;
}
