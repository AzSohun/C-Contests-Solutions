#include <stdio.h>

int main()
{

    int m, n;
    scanf("%d %d\n", &m, &n);

    int x, y;
    scanf("%d %d", &x, &y);

    int totat_treats = (m * x) + (n * y);

    printf("%d", totat_treats);

    return 0;
}