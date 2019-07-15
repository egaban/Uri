#include <iostream>
#include <cmath>

inline float dist(int x1, int y1, int x2, int y2)
{
  return sqrt(pow(x1-x2,2)+pow(y1-y2, 2));
}

int main(void)
{
  int r1, x1, y1, r2, x2, y2;

  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  while (std::cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    std::cout << ((dist(x1, y1, x2, y2)+r2 <= r1)? "RICO\n" : "MORTO\n");

  return 0;
}
