#include <iostream>
#include <map>
#include <string>

int main(void) {
    std::map<std::string, int> killers, mortos;
    std::map<std::string, int>::iterator it;
    std::string killer, killed;

    while (std::cin >> killer >> killed) {
        killers[killer]++;
        mortos[killed] = 1;
    }

    std::cout << "HALL OF MURDERERS" << std::endl;
    for (it = killers.begin(); it != killers.end(); it++) {
        if (!mortos[it->first])
            std::cout << it->first << " " << it->second << std::endl;
    }
}
