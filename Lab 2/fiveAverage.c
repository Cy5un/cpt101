#include <stdio.h>

void main()
{
    int n1, n2, n3, n4, n5, sum, average;
    printf("Please enter five integers in one line separated by spaces");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    // sum of the numbers
    sum = n1 + n2 + n3 + n4 + n5;
    printf("\nThe sum is %d\n", sum);

    // average of the numbers
    average = sum / 5;
    printf("\nThe average is %d\n", average);
}