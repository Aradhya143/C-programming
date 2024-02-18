#include<stdio.h>
int sumofdigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}
int main()
{
    int n,i,arr[10];
    printf("enter the size of array");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        arr[i]=sumofdigits(arr[i]);
        printf("%d ",arr[i]);
    }
    return 0;
    

}
