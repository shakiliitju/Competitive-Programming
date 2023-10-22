#include <stdio.h>
#include <math.h>

int main()
{
    double A, B;
    scanf("%lf %lf", &A, &B);
    double result = A / B;
    double floorResult = floor(result);
    double ceilResult = ceil(result);
    double roundResult = round(result);

    printf("floor %.0lf / %.0lf = %.0lf\n", A, B, floorResult);
    printf("ceil %.0lf / %.0lf = %.0lf\n", A, B, ceilResult);
    printf("round %.0lf / %.0lf = %.0lf\n", A, B, roundResult);

    return 0;
}
