#include <stdio.h>

int func(int x, int y, int q)
{
  if (x <= 0 && y <= 0)
    return q;

  if (x <= 0)
    return func(x, y - q, q);

  if (y <= 0)
    return func(x - q, y, q);

  return func(x, y - q, q) + func(x - q, y, q);
}

int main()
{

  printf("%d", func(15, 15, 10));

  return 0;
}