#include <stdio.h>
#include <math.h>

void main()
{
    float radius;
    printf("Enter a value for the radius: ");
    scanf("%f", &radius);

    double pi = 3.14;

    double radiusSquared = pow(radius, 2.0);
    double circumfrence = 2 * pi * radius;
    double area1 = pi * radiusSquared;
    double area2 = 0.5 * circumfrence * radius;

    printf("raidus: %.2f\n", radius);
    printf("circumfrence: %.2f\n", circumfrence);
    printf("area1: %.2f\n", area1);
    printf("area2: %.2f\n", area2);
}