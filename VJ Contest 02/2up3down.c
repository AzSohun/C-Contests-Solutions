#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    if (x - y >= -2 && x - y <= 3)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}