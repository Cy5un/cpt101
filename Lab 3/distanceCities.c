#include <stdio.h>

void main()
{
    float distance, conversion;

    printf("Please enter the distance between City A and City B (in kms) ");
    scanf("%f", &distance);

    // metres
    conversion = distance * 1000;
    printf("The distance in metres is %.2f metres\n", conversion);

    // feet
    conversion = distance * 3280.84;
    printf("The distance in feet is %.2f feet\n", conversion);

    // inches
    conversion = distance * 39370.1;
    printf("The distance in inches is %.2f inch\n", conversion);

    // centimetre
    conversion = distance * 100000;
    printf("The distance in centimeter is %.2f centimeter\n", conversion);
}