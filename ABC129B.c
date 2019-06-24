#include <stdio.h>
#include <stdlib.h>

// 絶対値を返す関数
int abs(int num) {
  return (num < 0) ? -num : num;
}

// 配列のn番目までの総和を求める関数
int sumArr(int *arr, int n) {
  int sum = 0;
  int i = 0;
  while (i < n) {
    sum += arr[i++];
  }
  return sum;
}

int main() {
  int n;
  scanf("%d", &n);
  int *warr = malloc(sizeof(int) * n);
  if (warr == NULL) {
    return -1;
  }
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", warr+i);
  }

  int flag = 1;  // 分ける位置
  int diff = 10000000;  // 仮想的な数
  for (flag = 1; flag < n; flag++)  {
    if (abs(diff) > abs(sumArr(warr, n) - 2*sumArr(warr, flag))) {
      diff = abs(sumArr(warr, n) - 2*sumArr(warr, flag));
    }
  }
  printf("%d\n", diff);
  return 0;
}
