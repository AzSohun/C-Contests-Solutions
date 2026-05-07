#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    int clearDay = 7 - (x + y);

    printf("%d", clearDay);

    return 0;
}