#include <stdio.h>
#include <stdlib.h>

int main() {
  int nbmot = 0;
  int v = 0;

  char chainemot[100];

  puts("Entrez une chaine avec des espaces, max 100 char espaces inclus\n");

  scanf("%[^\n]s", chainemot);
  getchar();

  printf("votre chaine:  %s \n", chainemot);

  for (v = 0; v < 100; v++) {
    if (chainemot[v] == ' ') {
      nbmot++;
    }
  }
  printf("nombre de mots : %d\n", nbmot);
  return 0;
}
