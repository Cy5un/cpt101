#include <stdio.h>

void main()
{
    int a = 5, b = 6, c;
    printf("The initial value of a is %d\n", a);
    printf("The initial value of b is %d\n", b);
    printf("The initial value of b is not assigned viz. %d\n", c);

    c = a;
    a = b;
    b = c;
    printf("A and b are now %d %d", a, b);
}