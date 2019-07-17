#include <iostream>
#include <cmath>

inline int min(int a, int b)
{
  return (a < b)? a : b;
}

inline double diagonal(double a, double b)
{
  return sqrt(a*a+b*b);
}

bool cabe(int l, int c, int r1, int r2)
{
  if (2*r1 > min(l, c) || 2*r2 > min(l, c))
    return false;
  if (diagonal(l-r1-r2, c-r1-r2) >= r1+r2)
    return true;
  else
    return false;
}

int main(void)
{
  int l, c, r1, r2;

  while (1) {
    std::cin >> l >> c >> r1 >> r2;

    if (!l)
      break;

    std::cout << (cabe(l, c, r1, r2)? "S\n" : "N\n");
  }

  return 0;
}
