#include <stdio.h>

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    int oneful_pair = a + b + (a * b);

    if (oneful_pair == 111)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}