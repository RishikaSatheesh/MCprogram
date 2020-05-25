/*
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    switch(n)
    {
    case 0:
        printf("%d is in the list.\n",n);
        break;
    case 1:
        printf("%d is in the list.\n",n);
        break;
    default:
        printf("%d is not in the list.\n",n);
        break;
    }
}

#include<stdio.h>
int main(void)
{
    for(int i=0;i<=6;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("0");
            printf("1");
        }
        printf("\n");
    }
}

#include <stdio.h>
int sum(int x)
{
    int r,m,s;
    r=x%10;
    m=x/10;
    if(x==0)
        return s;
    else
        s=r+sum(m);

}
int main(void)
{
    printf("Enter a number :\n");
    int n;
    scanf("%d",&n);
    int s=sum(n);
    printf("Sum of digits:%d",s);
}

#include <stdio.h>
int checkPrimeNumber(int n)
{
   int i, flag = 1, squareRoot;

   // computing the square root
   squareRoot = sqrt(n);
   for (i = 2; i <= squareRoot; ++i) {
      // condition for non-prime number
      if (n % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main(void)
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(checkPrimeNumber(n)==1)
    {
        printf("%d is a Prime Number.\n",n);

    }
    else
        printf("%d is not a Prime Number.\n",n);
}

#include <stdio.h>
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}
int main()
{
    int num1, num2, LCM;
    printf("Enter two numbers :\n");
    scanf("%d\n%d", &num1, &num2);
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);

    printf("LCM of %d and %d = %d", num1, num2, LCM);

    return 0;
}
What will the output of the foll. code be?
#include <stdio.h>
void foo(int p[4])
{
    int i=10;
    p=&i;
    printf("%d\n",p[0]);
}
int main(void)
{
    int arr[4]={1,2,3,4};
    foo(arr);
    printf("%d\n",arr[0]);
}
// to enter and print a 3D array:

#include <stdio.h>
int main(void)
{
    int r,c,h;
    printf("Enter rows,colomns and height of the array:");
    scanf("%d\n%d\n%d",&r,&c,&h);
    int arr[r][c][h];
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                printf("arr[%d][%d][%d]=",j,k,i);
                scanf("%d",&arr[j][k][i]);
            }
        }
    }
    // to printf the matrix:
     for(int i=0;i<h;i++)
    {
        printf("Matrix %d:\n",i);
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                printf("%d ",arr[j][k][i]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    //to print the sum of all diagonal elements:
}

#include <stdio.h>
int main(void)
{
    int arr[3][3];
    printf("Enter the elements of a 3 by 3 matrix:")
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
*/
#include <stdio.h>
struct employee
{
    char ename[10];
    char dep[10];
    int age, phn_no;
    int salary;
};
void details()
{
    struct employee emp[20];
    for(int i=0;i<2;i++)
    {
        printf("Enter details for employee %d:\n",i+1);
        printf("Enter employee name:");
        scanf("%s",&emp[i].ename);
        printf("Enter department name:");
        scanf("%s",&emp[i].dep);
        printf("Enter Age:");
        scanf("%d",&emp[i].age);
        printf("Enter phone number:");
        scanf("%d",&emp[i].phn_no);
        printf("Enter salary:");
        scanf("%d",&emp[i].salary);

    }
    //to print employee details:
    printf("Name\tAge\tDepartment\tPh_No\tSalary\n");
    for(int i=0;i<2;i++)
    {
        printf("%s\t%d\t%s\t\t%d\t\t%d",emp[i].ename,emp[i].age,emp[i].dep,emp[i].phn_no,emp[i].salary);
        printf("\n");


    }
}
int main(void)
{
    details();
    return 0;
}
