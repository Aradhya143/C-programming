#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20]="ARADHYA";
    char str2[20]="rastogi";
    int i,l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    int j=0;
    for (i=l1;i<(l1+l2);i++)
    {
        str1[i]=str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;

}