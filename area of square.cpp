#include<stdio.h>
#include<math.h>
int a,b;
int main()
{

	printf("Enter the side length of the square in m\n");
	scanf("%d",&a);
	b=pow(a,2);
	printf("The area of the given square is %d",b);
	return 0;
}
