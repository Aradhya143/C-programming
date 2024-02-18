#include<stdio.h>
void duplicate(int arr[]){
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d is a duplicate element",arr[i]);
            }
        }
    }
    return ;

}
int main()
{
    int i,arr[5];
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    duplicate (arr);
    return 0;



}