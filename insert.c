#include<stdio.h>
int main()
{
    int *p,a;
    a=5;
    p=&a;
    printf("%p\n",p);
    printf("%p\n",&a);
    return 0;
}