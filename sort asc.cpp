#include <stdio.h>
int main()
{
   
   int n;
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements\n");
   for(int i=0;i<n;i++)
   		scanf("%d",&a[i]);
   
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n-i;j++)
   	{
   		if(a[j+1]<a[j])
   		{
		   
   			int t=a[j];
   			a[j]=a[j+1];
   			a[j+1]=t;
   		}
	   }
   }
   for(int i=0;i<n;i++)
   		printf("%d",a[i]);
}  
