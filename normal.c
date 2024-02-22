#include<stdio.h>
#include<math.h>
int main()
{
 int arr[3][3];
 for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    int normal=0;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            normal=(normal+arr[i][j]*arr[i][j]);
        }
    }
    printf("The normal of the matrix is %f",sqrt(normal));
    return 0;

    
}