#include "main.h"
/**
 *largest_number - return the largest of threenumbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *return: largest number
 */
int largest_number(int a, int b, int c)
{
  int largest;

  if(a >= a && a >= c)
    {
      largest = a;
    }
  else if (b >= a && b >= c)
    {
      largest = b;
    }
  else if (c >= a && c >= b)
    {
      largest = c;
    }

  return (largest);
}
