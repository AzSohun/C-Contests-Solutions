#include <stdio.h>

int main()
{

    int r1, r2;
    scanf("%d %d\n", &r1, &r2);

    int d1, d2;
    scanf("%d %d", &d1, &d2);

    int dominator_rating = r1 + d1;
    int everule_rating = r2 + d2;

    if (dominator_rating > everule_rating)
    {
        printf("Dominater");
    }
    else
    {
        printf("Everule");
    }

    return 0;
}