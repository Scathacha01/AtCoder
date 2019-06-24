#include <stdio.h>


// 配列で小さいうちから2つ選んで、その和を返す
int sumMin(int *arr) {
  if (arr[0] + arr[1] > arr[1] + arr[2]) {
    if (arr[1] + arr[2] > arr[2] + arr[0]) {
      return arr[2] + arr[0];
    } else {
      return arr[1] + arr[2];
    }
  } else {
    if (arr[0] + arr[1] > arr[2] + arr[0]) {
      return arr[2] + arr[0];
    } else {
      return arr[0] + arr[1];
    }
  }
}

int main() {
  int arr[3];
  scanf("%d %d %d", arr, arr+1, arr+2);
  printf("%d\n", sumMin(arr));
  return 0;
}
