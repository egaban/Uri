#include <stdio.h>

#define MAX 100000
#define EPSILON .0001

inline double abs(double n)
{
  return (n > 0)? n : -n;
}

double cortar(short tiras[MAX], int n, int area, double comeco, double fim)
{
  double corte = (comeco + fim) / 2;
  double area_cortada = 0;

  for (int i = 0; i < n; ++i) {
    if (tiras[i] >= corte)
      area_cortada += tiras[i] - corte;
  }

  if (abs(area_cortada - area) <= EPSILON)
    return corte;
  else if (area_cortada < area)
    return cortar(tiras, n, area, comeco, corte);
  else
    return cortar(tiras, n, area, corte, fim);
}

int main(void)
{
  int n, a;
  long area_tiras = 0;
  short tiras[MAX], maior;

  while (1) {
    scanf("%d %d", &n, &a);
    area_tiras = maior = 0;

    if (!n && !a)
      break;

    for (int i = 0; i < n; ++i) {
      scanf("%hd", &tiras[i]);
      if (tiras[i] > maior)
        maior = tiras[i];
      area_tiras += tiras[i];
    }

    if (area_tiras == a)
      printf(":D\n");
    else if (area_tiras < a)
      printf("-.-\n");
    else
      printf("%.4lf\n", cortar(tiras, n, a, 0, maior));
  }

  return 0;
}
