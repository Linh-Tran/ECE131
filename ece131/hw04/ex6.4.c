#include <stdio.h>

int main()
{
    float input, average, sum = 0.0;
    int i;

    //initialize values in array to 0
    printf("Enter 10 values to be averaged:\n");

    //for through 10 iterations and record add input to sum
    for(i = 0; i < 10; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &input);
        sum = sum + input;
    }

    //calculate the average and print out the result
    //round to nearest hundred thousandths.
    average = sum / 10.0;
    printf("Average = %.2f\n", average);

    return 0;
}
