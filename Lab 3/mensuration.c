#include <stdio.h>

void main()
{
    float length, breadth, radius, answer;

    printf("Enter the length and breadth of the rectangle in the following format \"length breadth\": ");
    scanf("%f %f", &length, &breadth);

    printf("\nPlease enter the radius of the circle: ");
    scanf("%f", &radius);

    answer = length * breadth;
    printf("The area of the rectangle is %.2f\n", answer);

    answer = 2 * (length + breadth);
    printf("The perimeter of the rectangle is %.2f\n", answer);

    answer = 2 * 3.14 * radius;
    printf("The circumference of the circle is %.2f\n", answer);

    answer = 3.14 * radius * radius;
    printf("The area of the circle is %.2f\n", answer);
}