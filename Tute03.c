/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
   int num,sum=0, x=1;//num-numbers, i=counter

  printf("Enter the number= ");// enter any number
  scanf("%d",&num);

    for(x=1 ; x<=n ; x++)
      {
    sum=sum+x;// calculate the sum
      }

  printf("sum = %d",sum);// display the sum
}

