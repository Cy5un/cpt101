#include <stdio.h>
#include <math.h>

int main()
{
    float final, initial, rate;
    int time;

    printf("Please enter the Initial Principal Balance: ");
    scanf("%f", &initial);

    printf("\nEnter the interest rate, the format should be x, don't add the percentage there: ");
    scanf("%f", &rate);

    printf("\nPlease enter, the time (in years)");
    scanf("%d", &time);

    final = initial * (rate / 100) * time;
    printf("\nThe Simple Interest is %f\n", final);
}
