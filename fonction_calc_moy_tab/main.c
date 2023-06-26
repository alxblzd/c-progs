#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANNEE 2020

int iAge = 0;
int moysal = 0;
int maxsal = 0;

typedef struct {
  char m_cInitiale;
  int m_iNaissance;
  int m_fSalaire;
  int m_iAnciennete;

} TSalarie;

int Age(int m_iNaissance) {
  iAge = 2020 - m_iNaissance;
  return iAge;
}

void carac(TSalarie tabSal) {
  printf("Age : %d | ", Age(tabSal.m_iNaissance));
  printf("Initiale : %c, Salaire : %d, naissance : %d, anciennete : %d \n",
         tabSal.m_cInitiale, tabSal.m_fSalaire, tabSal.m_iNaissance,
         tabSal.m_iAnciennete);
}

void stats(TSalarie tabSal) {
  moysal += tabSal.m_fSalaire;
  if (tabSal.m_fSalaire > maxsal) {
    maxsal = tabSal.m_fSalaire;
  }
}

void modif(TSalarie *tabSal, int a) {
  printf("Vous avez choisi de modifier les parametres de l'employe n %d\n", a);
  puts("entrez son initale :\n");
  scanf("%c", &tabSal->m_cInitiale);
  puts("entrez sa date de naissance :\n");
  scanf("%d", &tabSal->m_iNaissance);
  puts("entrez son salaire :\n");
  scanf("%d", &tabSal->m_fSalaire);
  puts("entrez son anciennete :\n");
  scanf("%d", &tabSal->m_iAnciennete);
  getchar();
}

int main() {
  TSalarie tabSal[5];
  int i = 0;
  srand((int)time(NULL));

  puts("=== Tableaux de salaire et calcul de moyennes ===\n");


  for (i = 0; i < 5; i++) {

    tabSal[i].m_iNaissance = rand() % (2000 - 1970) + 1970;
    tabSal[i].m_fSalaire = rand() % (4000 - 1800) + 1500;
    tabSal[i].m_iAnciennete = rand() % 20;
    tabSal[i].m_cInitiale = rand() % (90 - 65) + 65;
  }

  while (1) {
    int u = 0;
    puts("---------------------------------");

    for (u = 0; u < 5; u++) {
      carac(tabSal[u]);
      stats(tabSal[u]);
    }
    puts("---------------------------------");

    printf("\nMoyenne salaire : %d , salaire max : %d \n", moysal / 5, maxsal);
    moysal = 0;

    int num = 0, choix = 0;
    puts(
        "\nVoulez vous changer les parametres d'un employe ? (1/0), Default=0\n");
    choix = getc(stdin);
    if (choix == '1') {
      puts("Quel employe voulez vous modifier ? 1, 2, 3, 4 ,5\n");
      scanf("%d", &num);
      getchar();
      modif(&tabSal[num - 1], num);

      int num = 0, choix = 0;

    } else {

      return 0;
    }
  }
}
