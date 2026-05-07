#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    int laddus = y * 10;

    int remainings = x - laddus;

    int jalebis = remainings / 20;

    printf("%d", jalebis);

    return 0;
}