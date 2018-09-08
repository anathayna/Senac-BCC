/*
Defina as operações de multiplicação usando uma equação de recorrência. Implemente esta operação de forma recursiva.
*/

#include <stdio.h>

int multi(int n, int m){
  if (m==0)
    return 0;
  else
    return m + multi(m, n - 1);
}

int main(void) {
  int x, y;
  printf("Digite um valor para x: ");
  scanf("%d", &x);
  printf("Digite um valor para y: ");
  scanf("%d", &y);
  
  printf("%d X %d = %d", x, y, multi(x,y));
  return 0;
}
