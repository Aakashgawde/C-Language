#include <stdio.h>

int main()
{
    // DISCLAIMER : this is not a best method to solve this problem
    int n = 2, prime =1 ;
    for ( int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("this is not a prime number");
    }
else{
     printf("this is  a prime number");
}
    return 0;
}