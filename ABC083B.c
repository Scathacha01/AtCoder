// Some Sums

 #include <stdio.h>

// 各桁の数字の和を求める
int SumDigit(int n) {
  int sum = 0;

  do {
    sum += n % 10;
    n /= 10;

  } while (n > 9);
  sum += n;

  return sum;
}

int main() {
  int a, b, n, tmp, sum = 0;
  scanf("%d %d %d", &n, &a, &b);

  for (tmp = 0; tmp <= n; tmp++) {
    if (SumDigit(tmp) >= a && SumDigit(tmp) <= b){
      sum += tmp;
    }
  }

  printf("%d\n", sum);
  return 0;
}
