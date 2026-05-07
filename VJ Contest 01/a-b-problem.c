#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    int div = a / b;
    int rem = a % b;
    double real = (double)a / (double)b;

    printf("%d %d %.5lf", div, rem, real);

    return 0;
}