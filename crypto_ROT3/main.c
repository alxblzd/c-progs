#include <stdio.h>
#include <string.h>

int main()

{
  int decal = 3;

  char crypt[20];
  
  puts("=== Rotation de 3 chaine ===");
  puts("Entrez une chaine de caractere de maximum 20 lettres\n\n");
  scanf("%s", crypt);

  int len = strlen(crypt);

  for (int n = 0; n < len; n++) {
    decal = 3;
    // printf("%d\n\n",crypt[n]);
    if (64 < crypt[n] && crypt[n] < 91) {

      if (crypt[n] == 90 || crypt[n] == 89 || crypt[n] == 88) {
        int lettre = crypt[n];
        char decrypt = lettre - 23;
        printf("%c", decrypt);
        decal = 3;

      } else {

        int lettre = crypt[n];
        char decrypt = lettre + decal;
        printf("%c", decrypt);
      }
    } else if (96 < crypt[n] && crypt[n] < 123) {
      // printf("%d", crypt[n] );
      if (crypt[n] == 122 || crypt[n] == 121 || crypt[n] == 120) {

        int lettre = crypt[n];
        char decrypt = lettre - 23;
        printf("%c", decrypt);
        decal = 3;

      } else {

        int lettre = crypt[n];
        char decrypt = lettre + decal;
        printf("%c", decrypt);
      }
    }
  }
  puts("\n\n");
  return 0;
}
