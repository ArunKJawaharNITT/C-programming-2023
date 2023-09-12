#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,t;
	printf("Enter the marks of all 5 subjects out of 100\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	t=(a+b+c+d+e)/5;
	printf("The average of all the subject marks is %f and the percentage of the marks is %f %%",t,t);
	return 0;
}
