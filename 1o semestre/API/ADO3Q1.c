#include <stdio.h>
#include <math.h>

int negativo(int x) { 
  
 if(x >= 0)
   return 1;
 else
   return 0;
}

int main() {
  
 int a;

 printf("Digite um valor: ");
 scanf("%d", &a);

 if(negativo(a) == 1)
   printf("n� positivo!");
 else
   printf("n� negativo!");
  return 0;
}
