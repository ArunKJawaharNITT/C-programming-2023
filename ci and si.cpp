#include<stdio.h>
#include<math.h>

int main()
{
	float p,t,r,si,a,ci;
	printf("Enter the amount for the interest to be calculated\n");
	scanf("%f",&p);
	printf("Enter the rate of the interest to be calculated\n");
	scanf("%f",&r);
	printf("Enter the years for which interest has to be calculated\n");
	scanf("%f",&t);
	si=(p*t*r)/100;
	printf("The simple interest of the given information is %f\n",si);
	a=p*pow((1+r),t);
	ci=a-p;
	printf("The compound interest of the given information is %f\n",ci);
	return 0;
}
