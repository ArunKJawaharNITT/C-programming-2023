#include<stdio.h>

int main()
{
	float b,da,ta,hra,g;
	int a;
	printf("Enter your basic salary\n");
	scanf("%f",&b);
	da=44*b/100;
	ta=(8*b)/100;
	printf("Enter the option of your region\n1.Metropolitan		2.Tier 1	3.Tier 2	4.Tier 3");
	scanf("%d",&a);
	if(a==1)
		hra=(27*b)/100;
	else if(a==2)
		hra=(24*b)/100;
	else if(a==3)
		hra=(16*b)/100;
	else if(a==4)
		hra=(12*b)/100;
	
	g=b+da+ta+hra;
	printf("The gross salary of yours is %f",g);
	return 0;
}
