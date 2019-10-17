#include <stdio.h>
 
int potencia(int k, int n){
  if(n==1)
    return k;
  else if (n==0)
    return 1;
  else {
    return k * potencia(k, n-1);
  }
 
}
 
int main(void) {
  int k, n;
  printf("Número: \n");
  scanf("%d", &k);
  printf("Expoente: \n");
  scanf("%d", &n);
 
  printf("O resultado e: %d", potencia(k, n));
}
