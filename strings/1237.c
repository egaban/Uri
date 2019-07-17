#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 50

int longest_substr(char *a, char *b)
{
  int z = 0;
  int i, j;
  int m = strlen(a);
  int n = strlen(b);
  int L[MAX_STR_SIZE][MAX_STR_SIZE] = {0};

  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      if (a[i] == b[j]) {
        if (i == 0 || j == 0)
          L[i][j] = 1;
        else
          L[i][j] = L[i-1][j-1] + 1;
        if (L[i][j] > z)
          z = L[i][j];
      }
    }
  }

  return z;
}

int main(void)
{
  char a[MAX_STR_SIZE+1], b[MAX_STR_SIZE+1];

  while (scanf(" %[^\n]", a) != EOF) {
    scanf(" %[^\n]", b);
    printf("%d\n", longest_substr(a, b));
  }

  return 0;
}
