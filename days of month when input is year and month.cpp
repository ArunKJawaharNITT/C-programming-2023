#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any year and month\n");
	scanf("%d",&a);
	scanf("%d",&c);
	if(a%4==0 &&(a%400==0||a%100!=0))
		b=29;
	else
		b=28;
	if(c==1||c==3||c==5||c==7||c==8||c==10||c==12)
		printf("31");
	else if(c==2)
		printf("%d",b);
	else if(c==4||c==6||c==9||c==11)
		printf("30");
	
	return 0;
}
