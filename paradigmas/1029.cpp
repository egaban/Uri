#include <iostream>

#define MAX_FIB 39

int fib[MAX_FIB+1];
int calls[MAX_FIB+1];

void preprocess()
{
  calls[0] = calls[1] = 0;
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i <= MAX_FIB; ++i) {
    fib[i] = fib[i-1] + fib[i-2];
    calls[i] = 2 + calls[i-1] + calls[i-2];
  }
}

int main(void)
{
  int n, x;
  preprocess();

  std::cin >> n;

  while (n--) {
    std::cin >> x;
    std::cout << "fib(" << x << ") = " << calls[x] << " calls = " << fib[x] << "\n";
  }

  return 0;
}
