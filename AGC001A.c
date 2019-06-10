// BBQ Easy

#include<stdio.h>
#include<stdlib.h>

void exch(int *a, int *b);
void isort(int *l, int len);
int min(int a, int b);

int main(int argc, char *argv[]) {
  int n, tmp, sum = 0;
  int *l;

  scanf("%d", &n);
  l = malloc(sizeof(int) * 2 * n);
  for(tmp = 0; tmp < 2*n; tmp++) {
    scanf("%d", &l[tmp]);
  }
  for(tmp = 0; tmp < 2*n; tmp++) {
    printf("l[%d]: %d\n", tmp, *l+tmp);
  }
  printf("\n");
  isort(l, 2*n);
  // for(tmp = 0; tmp <= 2*n; tmp = tmp+2) {
  //   sum += l[tmp];
  // }
  // printf("%d\n", sum);
  return 0;
}

void exch(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void isort(int *l, int len) {
  int i, j, min_j;
  for(i = 0; i < len; i++) {
    min_j = i;
    for(j = i+1; j < len; j++) {
      // if(l[i] > l[j]) exch(l+i, l+j);
      if(l[min_j] > l[j]) {
        min_j = j;
      }
      exch(l+i, l+i);
    }
  }
}
