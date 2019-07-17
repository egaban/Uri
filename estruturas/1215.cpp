#include <iostream>
#include <set>

int main(void)
{
  std::set<std::string> dic;
  std::string in, word;

  std::cin.tie(NULL);
  std::cin.sync_with_stdio(false);

  while (std::cin >> in) {
    word = "";
    for (auto i : in) {
      char c = tolower(i);
      if (islower(c))
        word += c;
      else {
        dic.insert(word);
        word = "";
      }
    }
    dic.insert(word);
  }

  dic.erase("");

  for (auto i : dic)
    std::cout << i << "\n";

  return 0;
}
