#include<stdio.h>
int main()
{   int brr[3][3];
    int arr[3][3] = {
        { 1, 2, 9 },
        { 4, 3, 6 },
        { 7, 8, 9 }
    };
    int crr[3][3]=
    {
        {2,3,4},
        {5,7,9},
        {7,5,9}
    };

    int i, j;

    printf("Matrix before multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf(" %d", arr[i][j]);
        printf("\n");
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            brr[i][j]=0;
            for(int k=0;k<3;k++)
            {
                brr[i][j]=brr[i][j]+arr[i][k]*crr[k][j];
            }
        }
    }
     for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

