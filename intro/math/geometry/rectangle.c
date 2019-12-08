#include <stdio.h>

void main()
{
    float width;
    float height;

    printf("Please enter a width: ");
    scanf("%f", &width);

    printf("Please enter a height: ");
    scanf("%f", &height);

    float area = width * height;
    float perimeter = 2 * (height + width);

    printf("area: %.2f\n", area);
    printf("perimeter: %.2f\n", perimeter);
}