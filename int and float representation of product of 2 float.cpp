#include<stdio.h>

int main()
{
	float a,b,d;
	int c;
	printf("Enter the first floating point number\n");
	scanf("%f",&a);
	printf("Enter the second floating point number\n");
	scanf("%f",&b);
	d=a*b;
	c=a*b;
	printf("The floating point representation is %f and integer representation is %d",d,c);
	return 0;
}
