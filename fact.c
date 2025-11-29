#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    int i;

    if (n < 0) {
        printf("Factorial of negative number doesn't exist.\n");
        return -1;
    }

    for (i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

