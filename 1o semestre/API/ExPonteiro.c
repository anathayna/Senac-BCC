#include <stdio.h>
#include <stdlib.h> //NULL

int main(void) {
  int num;
  int *p = NULL;

  p = &num;
  *p = 42;

  printf("Valor de num: %d", num); // num = *p
  printf("\nValor de *p: %d", *p);
  printf("\nEndereco de num: %d", &num); // &num = p
  printf("\nValor de p: %d", p);

  return 0;
}