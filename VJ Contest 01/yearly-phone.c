#include <stdio.h>

int main()
{

    int x;

    scanf("%d", &x);

    int lastTwoDigits = x % 100;

    printf("K%.2d", lastTwoDigits);

    return 0;
}