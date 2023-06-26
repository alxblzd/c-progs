#include <stdio.h>

int minimum(int a, int b, int c) {
  int min = a;

  if (b < min) {
    min = b;
  }

  if (c < min) {
    min = c;
  }

  return min;
}

int maximum(int a, int b, int c) {
  int max = a;

  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }

  return max;
}

int main() {
  int num1, num2, num3;

  puts("=== calcul de maximum et de minimum en utilisant des fonctions ===\n");

  printf("Entrez le premier chiffre : ");
  scanf("%d", &num1);

  printf("Entrez le deuxième chiffre : ");
  scanf("%d", &num2);

  printf("Entrez le troisième chiffre : ");
  scanf("%d", &num3);

  int min = minimum(num1, num2, num3);
  int max = maximum(num1, num2, num3);

  printf("\nLe minimum est : %d\n", min);
  printf("Le maximum est : %d\n", max);

  return 0;
}
