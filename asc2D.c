#include<stdio.h>
int main()
{
    int arr[20][20],i,j,m,n,r,c,temp;
    printf("enter row and column");
    scanf("%d %d",&r,&c);
    printf("enter the element \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            for (m=i;m<r;m++)
            {
                for (n=j;n<c;n++)
                {
                    if (arr[i][j]<arr[m][n])
                    {
                        temp=arr[i][j];
                        arr[i][j]=arr[m][n];
                        arr[m][n]=temp;
                    }
                }
            }
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);        }
            printf("\n");
    }
    return 0;

}