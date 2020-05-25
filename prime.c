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
