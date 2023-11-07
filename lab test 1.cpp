#include<stdio.h>
int main()
{
	int n,a,b;
	printf("Enter which Arithmetic operation to perform\n 1.Addition  2.Subtraction  3.Multiplication  4.Division\n");
	scanf("%d",&n);
	printf("Enter any two numbers\n");
	scanf("%d %d",&a,&b);
	float c;
	c=a/b;
	switch(n)
	{
		case 1:
			printf("Addition of the 2 numbers is %d",a+b);
			break;
		case 2:
			printf("Subtraction of the 2 numbers is %d",a-b);
			break;
		case 3:
			printf("Multiplication of the 2 numbers is %d",a*b);
			break;
		case 4:
			printf("Division of the 2 numbers is %f",c);
			break;
		
		default:
			printf("Invalid arithmetic operation");
			
	}
	return 0;
}
