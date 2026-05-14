#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    if (x < y)
    {
        printf("Old");
    }
    else if (x == y)
    {
        printf("Same");
    }
    else
    {
        printf("New");
    }

    return 0;
}