// Coins

#include <stdio.h>
#include <stdlib.h>

// 配列aの中でn以下で最大の数を返す
int LessThan(int *a, int m, int n) {
  int tmp, max = 1;

  for (tmp = 0; tmp < n; tmp++) {
    if (max <= m && max < *(a + tmp)) {
      max = *(a + tmp);
    }
  }
  return max;
}

int main(){
  int n, tmp, m = 100, scr_a = 0, scr_b = 0;
  int *a = {0};

  scanf("%d", &n);
  a = malloc(sizeof(int) * n);
  for (tmp = 0; tmp < n; tmp++) {
    scanf("%d", &*(a + tmp));
  }

  for (tmp = 0; tmp < n; tmp++) {
    printf("%d\n", LessThan(a, m, n));
    m = LessThan(a, LessThan(a, m, n), n);
  }

  for (tmp = 0; tmp < n; tmp++) {
    if (tmp % 2 == 0) scr_a += LessThan(a, m, n);
    else scr_b += *(a + tmp);
    m = LessThan(a, LessThan(a, m, n), n);
  }

  printf("%d\n", scr_a - scr_b);
  free(a);
  return 0;
}
