#include<stdio.h>
int main()
{
	int d,m,y,b;
	printf("Enter any date in format day month year\n");
	scanf("%d %d %d",&d,&m,&y);
	if(y%4==0 &&(y%400==0||y%100!=0))
		b=29;
	else
		b=28;
	else if(m==1||m==3||m==5||m==7||m==8||m==10)
		if(d>0&&d<31)
			d=d+1;
		else if(d==31)
			m==m+1;
			d=1;
	else if(m==2)
		printf("%d",b);
	else if(m==4||m==6||m==9||m==11)
		printf("30");
	else if(m==12)
		
	
	return 0;
}
