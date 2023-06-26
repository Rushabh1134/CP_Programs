#include <stdio.h>

int LCM (int a, int b);

int main () {
    
  int a, b, lcm;

  printf ("Enter two numbers: ");

  scanf ("%d%d", &a, &b);

  lcm = LCM(a, b);

  printf ("The LCM of %d and %d is %d\n", a, b, lcm);

  return 0;

}

int LCM(int a, int b)
{

  static int common = 1;

  if (common % a == 0 && common % b == 0) {
      
      return common;
      
    }

  common++;

  LCM(a, b);	//call the function lcm recursively.

}