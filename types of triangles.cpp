#include<stdio.h>

int main()
{
	float a,b,c;
	printf("Enter the 3 sides of the triangle\n");
	scanf("%f %f %f",&a,&b,&c);

	if(a==b && a==c)
		printf("equilateral");
	else if(a==b||b==c||c==a)
		printf("isosceles");
	else
		printf("scalene");
	return 0;
}
