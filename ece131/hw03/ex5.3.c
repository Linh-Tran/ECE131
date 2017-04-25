#include <stdio.h>

int main(int argc, const char * argv[])
{
  float input1,input2, result;
  printf("Enter the first integer: \n");
  scanf("%f", &input1);
  printf("Enter the second integer: \n");
  scanf("%f", &input2);
  result = input1/input2;

  if (input2 !=0) printf("The result is: %.3f\n", result);
  else printf("Divide by zero not allowed.\n");
 
  return 0;
}
