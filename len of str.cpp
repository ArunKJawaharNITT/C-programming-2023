#include <stdio.h>
int main()
{
   
    char str[100];
    int l=0;
    printf("Enter a string: \n");
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++)
    {
        l++;
    }
   printf("Length of input string: %d",l);
    
     return 0;
}  
