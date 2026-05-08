#include <stdio.h>

int main()
{

    int note;

    scanf("%d", &note);

    int need_500_rupees_notes = note * 4;

    printf("%d", need_500_rupees_notes);

    return 0;
}