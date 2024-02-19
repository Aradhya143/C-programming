#include<stdio.h>
#include<string.h>
int main()
{   char str[40],x;
    int i;
    int count=0;
    printf("enter the string ");
    fgets(str,40,stdin);
    printf("enter the character you want to search");
    scanf("%c",&x);
    
    for (i=0;i<strlen(str);i++)
    {
        if (str[i]==x)
        count++;
    }
    printf("the frequency is %d",count);
    return 0;
}