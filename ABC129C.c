#include <stdio.h>

// ぬけのないときをフィボッチ数列に則る
// 前置代入
int fib(int n) {
  if (n == 0) return 1;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main() {
  int n, m;
  int sol = 1;
  scanf("%d", &n);
  scanf("%d", &m);
  int am, prevam = 0;
  // 連続した階段が壊れているとき0を出力して終了
  int i = 0;
  while (i++ < m) {
    scanf("%d", &am);
    if (prevam != 0 && prevam + 1 == am) {
      printf("0\n");
      return 0;
    }
    printf("LOG:      am-1: %3d    am: %3d\n", prevam, am);
    printf("LOG:      %4d\n", fib(am-prevam-1));
    sol = sol * fib(am - prevam - 1) % 1000000007;
    printf("LOG:      sol: %d\n", sol);
    prevam = am;
  }
  printf("LOG:      am-1: %3d    am: %3d\n", prevam, n);
  printf("LOG:      %4d\n", fib(n-prevam-1));
  sol = sol * fib(n-prevam-1) % 1000000007;
  while (sol < 0) {
    sol += 1000000007;
  }
  printf("%d\n", sol);
  printf("%d\n", fib(2));
  return 0;
}
