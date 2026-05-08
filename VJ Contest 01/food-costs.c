#include <stdio.h>

int main()
{

    int mess, restaurant;

    scanf("%d %d", &mess, &restaurant);

    int total_weekly_bill = (mess * 6) + restaurant;

    printf("%d", total_weekly_bill);

    return 0;
}