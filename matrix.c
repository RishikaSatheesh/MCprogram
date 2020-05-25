#include <stdio.h>
int main(void)
{
    int arr[3][3];
    printf("Enter the elements of a 3 by 3 matrix:");
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<3;k++)
            {
                printf("arr[%d][%d]=",j,k);
                scanf("%d",&arr[j][k]);
            }
    }
    //to print the matrix:
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<3;k++)
            {
                printf("%d ",arr[j][k]);
            }
        printf("\n");
    }
    //to print sum of diagonal elements:
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
                sum+=arr[j][i];
        }
    }
    printf("Sum of diagonal elements:%d",sum);
}
