#include<stdio.h>
int main()
{
    int *p;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        p=&arr[i];
        printf("%d\n",*p);
    }
    return 0;
}