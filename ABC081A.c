// Placing Marbles

#include <stdio.h>

int main() {
  int s, cnt_s, tmp = 0;

  while (tmp++ < 3) {
    scanf("%1d", &s);
    if (s == 1) cnt_s += 1;
  }

  printf("%d\n", cnt_s);

  return 0;
}
