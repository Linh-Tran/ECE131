#include <stdio.h>

int main()
{
   float expr1, expr2, result;

   //Compute both expessions. 
   expr1 = 3.31e-8 * 2.01e-7; 
   expr2 = 7.16e-6 * 2.01e-8;

   //Compute result.
   result = expr1 / expr2;

   printf("The result is: %.2e\n", result);

   return 0;
}
