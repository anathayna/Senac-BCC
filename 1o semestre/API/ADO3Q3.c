#include <stdio.h>
#include <math.h>

double fatorial(int x) {
  double fat;

 for(fat=1; x>1; x--) // n=n-1
   fat = fat * x;

 return fat;
}

int main() {
  int x;
 double fat;

 printf("Digite um valor: ");
 scanf("%d", &x);

 fat=fatorial(x);

 printf("Fatorial: %.0f", fat);
}
