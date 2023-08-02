#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  n = 1;
  a[0] = 2;
  a[1] = 3;
  a[2] = 4;
  a[3] = 5;
  a[4] = 6;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", *p);
  printf("a[2] = %d\n", *(p + 1));
  printf("a[2] = %d\n", *(p + 2));
  printf("a[2] = %d\n", *(p + 3));
  printf("a[2] = %d\n", *(p + 4));
  printf("a[2] = %d\n", *(p + 5));
  printf("a[2] = %d\n", *(p + 6));
  printf("a[2] = %d\n", *(p + 7));
  printf("a[2] = %d\n", *(p + 7));
  printf("a[2] = %d\n", *(p + 8));
  return (0);
}
