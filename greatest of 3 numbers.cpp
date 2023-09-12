#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	printf("Enter any 3 numbers\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>b&&a>c)
		printf("The greatest number is A that is %f",a);
	else if(b>c)
		printf("The greatest number is B that is %f",b);
	else
		printf("The greatest number is C that is %f",c);
	return 0;
}
