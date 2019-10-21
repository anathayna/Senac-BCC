#include <stdio.h>
#include <math.h>

// números pares entre 85 e 907

int main(void) {
  int i=85, aux, soma;
  
    for(i=85;i<=907;i++){
      if(i%2==0){
        printf("%d ", i);
        soma += i;
      }
    }
  printf("\n\nsoma: %d", soma); //soma de todos os pares
  
  return 0;
}