#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any year\n");
	scanf("%d",&a);
	if(a%4==0 &&(a%400==0||a%100!=0))
		printf("It is a leap year");
	else
		printf("It is not a leap year");
	return 0;
}
