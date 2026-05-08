#include <stdio.h>

int main()
{

    long long int a, b;

    scanf("%lld %lld", &a, &b);

    // Ceiling Division Trick: (a + b - 1) / b
    long long int toKilled = (a + b - 1) / b;

    printf("%lld", toKilled);
}
