#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char cache[10];
  int i, g;
  int length;
  int erreur = 0;

  char lettre;
  puts("=== Jeu du pendu ===\n");
  puts("Entrez un mot de maximum 10 caractères pour commencer le jeu\n");
  scanf("%s", cache);

  length = strlen(cache);
  char recherche[length];
  char compare[length];

  for (g = 0; g < length; g++) {
    recherche[g] = '*';
  }

  while (1 && erreur < 5) {
    puts("Le jeu commence, entrez une lettre.\n");
    
    getchar();
    lettre = getc(stdin);
    
    strcpy(compare, recherche);
    int trouve = 0;

    for (i = 0; i < length; i++) {
      if (cache[i] == lettre) {
        recherche[i] = lettre;
        trouve = 1;
      }

      if (strchr(recherche, '*') == 0) {
        printf("Bravo, vous avez gagné !\n");
        printf("%s\n", recherche);
        return 0;
      }
    }

    if (trouve) {
      printf("Lettre trouvée !\n");
    } else {
      erreur += 1;
      printf("Lettre incorrecte.\n");
    }

    if (strcmp(recherche, cache) == 0) {
      printf("gg");
      return 0;
    }

    printf("%s\n", recherche);
  }
  
  printf("Perdu ! Le mot était : %s.\n", cache);
  return 0;
}
