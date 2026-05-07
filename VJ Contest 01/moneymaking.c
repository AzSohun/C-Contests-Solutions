#include <stdio.h>

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    int nuggets = x * 5000;
    int starPiece = y * 9800;

    int totalEarn = nuggets + starPiece;

    printf("%d", totalEarn);

    return 0;
}