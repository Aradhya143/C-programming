#include<stdio.h>
int main()
{
    int temp,*p,*b,m,n;
    m=10;
    n=20;
    printf ("the value of m is %d",m);
    printf("\n");
    printf ("the value of n is %d",n);
    printf("\n");

    p=&m;
    b=&n;
    temp=*p;
    *p=*b;
    *b=temp;
    printf("The swapped values of m and n are %d and %d",m,n);
    return 0;
}