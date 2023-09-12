#include<stdio.h>

int main()
{
	float a,b,c;
	double d;
	printf("Enter the distance in kilometres\n");
	scanf("%f",&a);
	b=a*1000;
	c=b*100;
	d=c*10;
	printf("The distance in metres is %f\n",b);
	printf("The distance in centimetres is %f\n",c);
	printf("The distance in millimetres is %f\n",d);
	return 0;
}
