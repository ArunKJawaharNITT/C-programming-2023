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
	printf("The percentage of the marks is %f%%\n",t);
	if(t>=90)
		printf("Grade A");
	else if(t>=80)
		printf("Grade B");
	else if(t>=70)
		printf("Grade C");
	else if(t>=60)
		printf("Grade D");
	else if(t>=40)
		printf("Grade E");
	else if(t<40)
		printf("Grade F");
	return 0;
}
