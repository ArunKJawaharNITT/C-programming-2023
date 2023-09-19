#include<stdio.h>
int main()
{
	char a,b,c;
	printf("Enter any alphabet\n");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		printf("It is a vowel");
	else
		printf("It is a consonant");
	return 0;
}
