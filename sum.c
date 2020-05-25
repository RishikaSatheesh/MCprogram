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
