#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{

    double r;

    scanf("%lf", &r);

    double area = M_PI * r * r;
    double circumference = 2 * M_PI * r;

    printf("%lf %lf\n", area, circumference);

    return 0;
}

// ------ !! wrong for using float
// #define _USE_MATH_DEFINES
// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     float r;

//     scanf("%f", &r);

//     float area = M_PI * pow(r, 2);
//     float circumference = 2 * M_PI * r;

//     printf("%.6f %.6f\n", area, circumference);

//     return 0;
// }
