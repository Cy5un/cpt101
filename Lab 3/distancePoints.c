#include <stdio.h>
#include <math.h>

double square(int num)
{
    return (num * num);
}

int main()
{
    int x1, x2, y1, y2;
    double answer, answer1;

    printf("Please enter the coordinates of point A (x1, y1) in the following format \"x1 y1\" ");
    scanf("%d %d", &x1, &y1);

    printf("Please enter the points x1 and x2 in the following format \"x2 y2\": ");
    scanf("%d %d", &x2, &y2);

    answer1 = square(x1 - x2) + square(y1 - y2);
    printf("The distance between points A and B is %lf\n", sqrt(answer1));

    return 0;
}