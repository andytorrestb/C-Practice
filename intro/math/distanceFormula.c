#include <stdio.h>
#include <math.h>

void main()
{
    float x1;
    float y1;

    printf("please enter your first (x,y): ");
    scanf("%f %f", &x1, &y1);

    float x2;
    float y2;

    printf("please enter your second (x,y): ");
    scanf("%f %f", &x2, &y2);

    float deltaX = x2 - x1;
    float deltaY = y2 - y1;
    float distanceSquared = pow(deltaX, 2) + pow(deltaY, 2);
    float distance = sqrt(distanceSquared);

    printf("\nThe distance in between the two points is: %.2f\n", distance);
}