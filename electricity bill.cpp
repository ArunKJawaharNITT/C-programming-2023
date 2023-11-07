#include<stdio.h>

int main()
{
	float a,b;
	printf("Enter the number of units\n");
	scanf("%f",&a);
	if(a<20)
		a=a*20;
	else if(a<100)
		a=a*40;
	else if(a<200)
		a=a*60;
	else if(a>200)
		a=a*90;
	b=a+((20*a)/100);		//sur charge is 20% of the total
	printf("The electricity bill is %f",b);
	return 0;
}
