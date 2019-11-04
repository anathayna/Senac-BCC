#include <stdio.h>

int fat(int n) {
  int f;
  if(n==0)
    return 1;
  else
    return n*fat(n-1);
}

int main(void) {
  int fat=1;
  for(int i=1; i<=5; i++){
    fat *= i;
    printf("Fatorial de %d! = %d fatorial\n", i, fat);
  }
  return 0;
}