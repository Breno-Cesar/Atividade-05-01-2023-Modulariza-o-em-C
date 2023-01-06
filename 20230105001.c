#include <stdio.h>
#include <stdlib.h>

int scanIntIntervalo(int min, int max) {
  int n;
  do {
    printf("Digite um numero inteiro (entre %d e %d): ", min, max);
    scanf("%d", &n);
  } while (n < min || n > max);
  return n;
}

float percentual(float valor, float total) {
  return 100 * valor / total;
}

float absdif(float n1, float n2) {
  return (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main() {
  int x = scanIntIntervalo(0, 1000);
  int y = scanIntIntervalo(0, 1000);

  int maior = (x > y) ? x : y;
  int menor = (x < y) ? x : y;

  printf("O percentual do menor em relacao ao maior e: %.2f%%\n", percentual(menor, maior));
  printf("O modulo da diferenca entre o maior e o menor é: %.2f\n", absdif(maior, menor));

  return 0;
}
