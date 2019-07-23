#include <iostream>
#include <map>

int main(void) {
  std::map<std::string, int> murderers;
  std::map<std::string, bool> dead;
  std::string killer, killed;

  while (std::cin >> killer >> killed) {
    murderers[killer]++;
    dead[killed] = true;
  }

  std::cout << "HALL OF MURDERERS" << std::endl;
  for (auto i : murderers)
    if (!dead[i.first])
      std::cout << i.first << " " << i.second << "\n";
}
