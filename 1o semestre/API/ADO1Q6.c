#include <stdio.h>

int segundos(int h, int m, int s){ // horas // minutos // segundos

 int x;

 x=(h*3600)+(m*60)+s;

 return x;
}

int main(void) {
  int h, min, seg, convert;

 printf("Digite as horas: ");
 scanf("%d", &h);

 printf("Digite os minutos: ");
 scanf("%d", &min);

 printf("Digite os segundos: ");
 scanf("%d", &seg);

 convert=segundos(h, min, seg);

 printf("\n%dh %dmin e %dseg correspondem a %dseg", h, min, seg, convert);

 return 0;
}
