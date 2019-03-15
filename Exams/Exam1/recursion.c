#include  <stdio.h>
#include  <stdlib.h>
void f(int a, int b, int * c, int * d)
{
  int m = * c;
  m ++;
  (*c) = m;
  int n = * d;
  if (b > n)
    {
      * d = b;
    }
  if (a  <= 1) { return; }
  f(a / 3, b + 1, c, d);
  f(a - 2, b + 1, c, d);
}
int  main(int argc , char * * argv)
{
  int x = 0;
  int y = 0;
  f(9, 0, & x, & y);
  printf ("x = %d, y = %d\n", x, y);
  return  EXIT_SUCCESS;
}
