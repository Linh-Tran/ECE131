#include <stdio.h>

int main()
{
    float F, C;

    F = 27;

    C = (F - 32);
    C  = C /1.8;

    printf("%.2f degrees Fahrenheit in Celsius is %.2f \n", F, C);
}
