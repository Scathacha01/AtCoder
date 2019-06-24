#include <stdio.h>

int sum(int start, int end) {
  int rslt = 0;
  while (start < end) {
    rslt += start++;
  }
  return rslt;
}

int main() {
  int n, l;
  scanf("%d", &n); scanf("%d", &l);

  if (l < 0 && n+l > 0) {
    printf("%d\n", sum(l, l+n));
    return 0;
  }
  if (l < 0) {
    printf("%d\n", sum(l, l+n-1));
  } else {
    printf("%d\n", sum(l+1, l+n));
  }
  return 0;

}
