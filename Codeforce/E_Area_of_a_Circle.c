#include <stdio.h>
#include <math.h>

int main()
{
    double radius, area;
    const double pi = 3.141592653;
    scanf("%lf", &radius);
    area = pi * pow(radius, 2);
    printf("%.9lf", area);

    return 0;
}