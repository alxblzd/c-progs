#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("=== Comptage de 'la' et 'le' ===\n");

  int nble = 0;
  int nbmot = 0;
  int nbla = 0;
  int v = 0;
  int i;

  char chainemot[150];

  char detect[] = ("lea");

  puts("Entrez une chaine avec ou sans espaces\n");
  scanf("%[^\n]s", chainemot);

  printf("\nvotre chaine:  %s \n", chainemot);

  for (i = 0; i < 150; i++) {
    // printf("%d", t);
    if (chainemot[i] == detect[0] && chainemot[i + 1] == detect[1]) {
      nble += 1;

    } else if (chainemot[i] == detect[0] && chainemot[i + 1] == detect[2]) {
      nbla += 1;
    }
  }

  printf("\nnombre de 'le' : %d et de 'la' : %d\n", nble, nbla);
  return 0;
}
