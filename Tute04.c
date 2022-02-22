/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() 
{
   int minimum(int num1, int num2);
   int maximum(int num1, int num2);
   int multiply(int num1, int num2);

   int main() 
   {
    int num1, num2;

    printf("Enter a value for number 1 : ");
    scanf("%d", &num1);

    printf("Enter a value for number 2 : ");
    scanf("%d", &num2);

    printf("%d ", minimum(num1, num2));//display the minimum number
    printf("%d ", maximum(num1, num2));//display the maximum number
    printf("%d ", multiply(num1, num2));//dsiplay the multiplication
    
    return 0;
  }
  int minimum(int num1, int num2)
  {
  if(no1<no2)
    return num1;
  else
    return num2;     
  }
  int maximum(int num1, int num2)
  {
    if(num1<num2)
      return num2;
    else 
      return num1;
  }
  int multiply(int num1, int num2)
  {
    return num1*num2;
    
    return 0;
  }
}