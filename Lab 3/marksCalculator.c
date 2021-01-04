#include <stdio.h>
void main()
{
    float english, hindi, maths, science, computer, total, percent;

    printf("Enter your marks in English: ");
    scanf("%f", &english);

    printf("Enter your marks in Hindi: ");
    scanf("%f", &hindi);

    printf("Enter your marks in Mathematics: ");
    scanf("%f", &maths);

    printf("Enter your marks in Science: ");
    scanf("%f", &science);

    printf("Enter your marks in Computer: ");
    scanf("%f", &computer);

    total = english + hindi + maths + science + computer;
    printf("Your aggregate marks are %.2f out of 500\n", total);

    percent = (total / 500) * 100;
    printf("Congratulations, you have secure %.2f percent in your exams\n", percent);
}