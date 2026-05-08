#include <stdio.h>

int main()
{

    int a, b, c;

    // %1d means to read maximum 1 digit only to avoid space in the input. where input expected single token - 123.
    scanf("%1d%1d%1d", &a, &b, &c);

    int sum = 111 * (a + b + c);

    printf("%d", sum);

    return 0;
}