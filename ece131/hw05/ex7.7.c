//Write a function that raises an integer to a positive integer power. 
//Call the function x_to_the_n taking two integer arguments x and n. Have the function return
//a long int, which represents the results of calculating xn

#include<stdio.h>


#include <stdio.h>

long int x_to_the_n (int x, int n)
{
  long int result = 1;
  int i;
    
  for (i = 1; i <= n; ++i){ 
      result *= x;
  }
  return result;
}

int main (void)
{
  // long int x_to_the_n (int x, int n);
  int xVal, nVal;
  printf("Enter x as the base: ");
  scanf("%d", &xVal);
  printf("\nAnd n as the exponent: ");
  scanf("%d", &nVal);
  printf("\n%d raise to %d is %ld\n", xVal, nVal, x_to_the_n (xVal, nVal));
  return 0;
}
