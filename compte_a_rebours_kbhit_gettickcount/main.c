#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Seulement pour windows

int main(void) {
  int t1, t2 = GetTickCount();
  int ch, i = 0;
  char textun = ' ';
  char textdeux;
  int condition = 0;

  while (i != 16000) {
    t1 = (GetTickCount() - t2);
    if (t1 == i && i != 16000) {
      printf("%d entree: %c%c\n", 15 - (t1 / 1000), textun, textdeux);
      i = i + 1000;
      textdeux = ' ';
      textun = ' ';
    }

    if ((int)textun == 'K' && textdeux == 'Z') {
      printf("%d entree: %c%c\n", 15 - (t1 / 1000), textun, textdeux);
      printf("Porte deverrouille");
      return 0;
    }

    if (kbhit()) {
      condition = 1;
      if (textun == ' ') {
        textun = getch();
      } else {
        textdeux = getch();
      }
    }
  }

  printf("Porte bloquee\n");
}
