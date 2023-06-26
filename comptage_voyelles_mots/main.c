#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//%[^\n]s" pour lire les espaces
int main() {
  puts("==== Comptage de voyelles &/|| de mots ===");
  
  puts("\nEntrez 1 pour comptage de voyelles (sans espace) et 2 pour comptage "
       "de mots (avec espaces)");
  char option = '\0';
  option = getchar();
  if (option == '1') {

    int size = 0;
    int i = 0;
    int t = 0;
    int nbvoy = 0;

    char chaine[100];

    puts("\nEntrez une chaine\n");
    scanf("%s", chaine);
    size = strlen(chaine);

    char voyelle[] = ("uaeiyo");

    for (i = 0; i < 100; i++) {

      for (t = 0; t <= 5; t++) {
        if (chaine[i] == voyelle[t]) {
          nbvoy++;
        }
      }
    }
    printf("\nnombre de voyelles : %d\n", nbvoy);
    return 0;
    
  } else if (option == '2') {
    int nbmot = 0;
    int v = 0;
    char chainemot[100];

    puts("\nEntrez une chaine avec des espaces\n");
    getchar();

    scanf("%[^\n]s", chainemot);

    printf("\nvotre chaine:  %s \n", chainemot);

    for (v = 0; v < 100; v++) {
      if (chainemot[v] == ' ') {
        nbmot++;
      }
    }

    printf("\nnombres de mots : %d\n", nbmot);
    return 0;
  }
}
