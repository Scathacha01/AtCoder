#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2) {
  int tmp;
  tmp = *num2;
  *num2 = *num1;
  *num1 = tmp;
}
// arr2の値で対応するarr1もソートする
// バブルソート
void sort(int n, int *arr1, int *arr2) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = n-1; j > i; j--) {
      if (arr2[j-1] > arr2[j]) {
        swap(arr2+j-1, arr2+j);
        swap(arr1+j-1, arr1+j);
      }
    }
  }
}

int main() {
  int n;
  int *a, *b;
  int suma = 0;
  scanf("%d", &n);
  a = malloc(sizeof(int) * n);
  b = malloc(sizeof(int) * n);
  int i = -1;
  while (++i < n) {
    scanf("%d %d", a+i, b+i);
  }
  sort(n, a, b);
  for (i = 0; i < n; i++) {
    suma += a[i];
    if (suma > b[i]) {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  free(a); free(b);
  return 0;
}

// TLE
