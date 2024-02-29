#include<stdio.h>
int main()
{
    int *p,*b,m,n;
    m=10;
    n=20;
    p=&m;
    b=&n;
    printf("THE SUM OF TWO NUMBERS IS %d\n",*p+*b);
    printf("THE difference  OF TWO NUMBERS IS %d\n",*p-*b);
    printf("THE Multiplication OF TWO NUMBERS IS %d\n",*p**b);

}