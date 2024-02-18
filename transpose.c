#include<stdio.h>
int main()
{
  int m,n;
    printf("input number of rows ");
    scanf("%d",&m);
    printf("input number of columns");
    scanf("%d",&n);
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }

    }
    printf("the matrix is \n");
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    
    printf("the transpose is \n");
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[j][i]);
        }
printf("\n");
    }
    return 0;
    

}

