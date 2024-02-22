#include<stdio.h>
#include<string.h>
int main()
{
    int arr[4][3];
    int count=0;
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (arr[i][j]==0)
            {
                count=count+1;
            }
        }
    }
    if (count >(12/2))
    {
        printf("sparse matrix");
    }
    else{
        printf("not sparse matrix");
    }
    return 0;

}