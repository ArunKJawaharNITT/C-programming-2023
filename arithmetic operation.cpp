#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=3;
	b=6;
	printf("Enter which arithmetic operation to perform?\n1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
	scanf("%d",&c);
	if (c==1)
		d=a+b;
	else if (c==2)
		d=a-b;
	else if (c==3)
		d=a*b;
	else if (c==4)
		d=a/b;
	printf("The given answer after your given arithmetic operation is %d",d);
	return 0;
}
