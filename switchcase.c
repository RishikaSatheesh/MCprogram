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
