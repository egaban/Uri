#include <cstdio>

#define MAX_BLOCKS 25
#define MAX_LEN 1000000

int M[2][MAX_LEN+1];
int blocos[MAX_BLOCKS];

int minBlocos(int n, int m);
inline int min(int a, int b);

int main(void)
{
  int t, n, comp_desejado;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &n, &comp_desejado);
    for (int i = 0; i < n; ++i)
      scanf("%d", &blocos[i]);

    printf("%d\n", minBlocos(n, comp_desejado));
  }

  return 0;
}

int minBlocos(int n, int m)
{
  for (int i = 0; i <= m; ++i)
    M[0][i] = i;

  for (int i = 1; i < n; ++i) {
    for (int j = 0; j <= m; ++j) {
      if (j < blocos[i])
        M[i%2][j] = M[(i-1)%2][j];
      else
        M[i%2][j] = min(M[(i-1)%2][j], M[i%2][j-blocos[i]]+1);
    }
  }

  return M[(n-1)%2][m];
}

inline int min(int a, int b)
{
  return (a < b)? a : b;
}
