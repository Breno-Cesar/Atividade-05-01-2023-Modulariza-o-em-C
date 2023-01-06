#include <stdio.h>

int fat(int n) {
  int fat = 1;
  for (int i = 1; i <= n; i++) {
    fat = fat * i;
  }
  return fat;
}

int main() {
  int n;
  printf("Digite um numero natural: ");
  scanf("%d", &n);
  printf("%d! = %d\n", n, fat(n));
  return 0;
}
