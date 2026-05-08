#include <stdio.h>
#include <math.h>

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    int num1 = pow(a, b);
    int num2 = pow(b, a);

    int sum = num1 + num2;

    printf("%d\n", sum);
}