#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	float p=3.14;
	printf("Enter radius of the circle\n");
	scanf("%f",&a);
	a=p*a*a;
	printf("The area of the circle is %f",a);
	return 0;
}
	
