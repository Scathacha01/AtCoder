// Shift only

#include <stdio.h>
#include <stdlib.h>

  int AllEven(int *array, int n) {
    int tmp;
    for (tmp = 0; tmp < n; tmp++) {
      if (*(array + tmp) % 2 == 1) return 0;
    }
    return 1;
  }

int main() {
  int n, tmp, cnt_div = 0;
  int *a;

  scanf("%d", &n);
  a = malloc(sizeof(int) * n);

  for (tmp = 0; tmp < n; tmp++) {
    scanf("%d", &a[tmp]);
  }

  while (AllEven(a, n) == 1) {
    for (tmp = 0; tmp < n; tmp++) {
      *(a + tmp) /= 2;
    }
    cnt_div += 1;
  }

  printf("%d\n", cnt_div);

  free(a);
  return 0;
}
