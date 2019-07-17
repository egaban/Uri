#include <iostream>

void processar_string(std::string s)
{
  bool ngr = false;
  bool itl = false;

  for (size_t i = 0; i < s.length(); ++i) {
    if (s[i] == '_') {
      std::cout << (itl? "</i>" : "<i>");
      itl = !itl;
    } else if (s[i] == '*') {
      std::cout << (ngr? "</b>" : "<b>");
      ngr = !ngr;
    } else
      std::cout << s[i];
  }
  std::cout << "\n";
}

int main(void)
{
  std::string linha;

  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  while (std::getline(std::cin, linha))
    processar_string(linha);

  return 0;
}
