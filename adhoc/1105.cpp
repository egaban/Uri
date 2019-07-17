#include <iostream>

int main(void)
{
  int b, n, d, c, v;
  int reservas[20];
  bool possivel;

  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  while (1) {
    std::cin >> b >> n;

    if (!b && !n)
      break;

    for (int i = 0; i < b; ++i)
      std::cin >> reservas[i];

    for (int i = 0; i < n; ++i) {
      std::cin >> d >> c >> v;
      reservas[d-1] -= v;
      reservas[c-1] += v;
    }

    possivel = true;
    for (int i = 0; i < b; ++i)
      if (reservas[i] < 0)
        possivel = false;

    std::cout << ((possivel)? "S" : "N") << std::endl;
  }

  return 0;
}
