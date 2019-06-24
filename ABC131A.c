#include <stdio.h>

int main() {
  char input[5];
  scanf("%s", input);
  if (input[0] == input[1]) {
    printf("Bad\n");
    return 0;
  }
  if (input[1] == input[2]) {
    printf("Bad\n");
    return 0;
  }
  if (input[2] == input[3]) {
    printf("Bad\n");
    return 0;
  }
  if (input[3] == input[4]) {
    printf("Bad\n");
    return 0;
  }
  printf("Good\n");
  return 0;
}
