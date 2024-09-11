#include <stdio.h>

typedef long long ll;
typedef short int si;

int sf(int x, int y)
{
  if (x == 1 || y == 1)
    return 1;
  if (x == y)
    return x;
  if (x > y)
    return sf(x - y, y);
  if (y > x)
    return sf(x, y - x);
}

int main()
{

  // Code Here

  printf("%d", sf(15, 255));
}
