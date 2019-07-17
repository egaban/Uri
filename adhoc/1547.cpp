#include <iostream>

int main(void)
{
  int n, qt, s, num;
  unsigned dif, menor_dif, index;

  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  std::cin >> n;

  while (n--) {
    std::cin >> qt >> s;
    menor_dif = -1;

    for (int i = 1; i <= qt; ++i) {
      std::cin >> num;
      dif = abs(s-num);
      if (dif < menor_dif) {
        menor_dif = dif;
        index = i;
      }
    }

    std::cout << index << std::endl;
  }

  return 0;
}
