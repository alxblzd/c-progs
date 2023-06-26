#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define nbr 50

int main() {

  double tab[nbr];
  long unsigned int a = 1;
  long unsigned int b = 0;
  int i = 0;
  int h, y;
  double fdiv;

  while (i < nbr) {
    tab[i] = a + b;
    b = a;
    a = tab[i];
    i++;
  }

  puts("\n Division des termes entres eux : \n");

  for (h = 0; h <= nbr/2 - 6; h++) { //Divise par 2 car inutile d'allez plus loin
    fdiv = (double)(tab[h + 1] / (double)tab[h]);

    printf(" : %.10g\n", fdiv);
  }

  puts("\n Termes de Fibonacci : \n");
  for (y = 0; y < nbr; y++) {
    printf("  %.15g\n", tab[y]);
  }

  printf("\n Le nombre d'or est : %f \n", (1 + (sqrt(5))) / 2);
}
