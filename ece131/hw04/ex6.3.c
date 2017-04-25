#include <stdio.h>

int main(void)
{
    //initialize variables
    int ratingCounters[11],i,response;


    for(i = 1; i <= 10; ++i)
    {
        ratingCounters[i] = 0;
    }

    printf("Enter your response\n");
    //infinite loop will continue until response == 999
    while(1)
    {
        scanf("%d", &response);

        if(response == 999) break;

        //check bad input
        if(response < 1 || response > 10) printf ("Bad response: %i\n", response);
        else ++ratingCounters[response];
    }

    //format output
    printf ("\n\nRating   Number of Responses\n");
    printf ("------   -------------------\n");

    for( i = 1; i <=10; ++i)
    {
        printf ("%4i%14i\n", i, ratingCounters[i]);
    }

    return 0;
}
