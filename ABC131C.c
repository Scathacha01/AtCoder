#include <stdio.h>

// 最大公約数を返す
long long int gcd(long long int num1, long long int num2) {
  if (num1 % num2 == 0) return num2;
  return gcd(num2, num1%num2);
}

// 最小公倍数を返す
long long int lcm(long long int num1, long long int num2) {
  return num1 * num2 / gcd(num1, num2);
}

int main() {
  long long int a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  long long int rslt;
  rslt = b - a + 1;
  rslt = rslt - b/c + (a-1)/c;
  rslt = rslt - b/d + (a-1)/d;
  rslt = rslt + b/lcm(c, d) - (a-1)/lcm(c, d);
  printf("%lld\n", rslt);
  return 0;
}
