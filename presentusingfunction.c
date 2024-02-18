#include <stdio.h>
void check (int arr[])
{
    int x;
    printf("enter the number you want to search");
    scanf("%d",&x);
    int count=0;
    for (int i=0;i<5;i++)
    {
        if (x==arr[i])
        {
            count=count+1;
        }
       
    }
    if (count>0)
    {
        printf("%d is present in array",x);
    }
    else
    {
        printf("%d is not present in aaray",x);
    }
    return;
}
int main()
{
   
   int arr[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        printf("%d \n",arr[i]);
    }
    check(arr);
    return 0;

}