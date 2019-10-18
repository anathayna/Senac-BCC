#include <stdio.h>
#include <math.h>

double logaritmo(int w) {
  double fat;

 for(fat=1; w>1; w++)
   fat = fat * w;

 return fat;
}

int main(){

int x, i, j, fat; // i: contador 1 // j: contador 2
float r = 1; // r: resultado

printf("Digite um nº: ");
scanf("%d", &x);

 for (i=1; i<20; i++){
   fat=1;
 }

   for(j=1; j<=i; j++){
     fat=fat * j;
   }

   r = r + (pow(x, i) / fat);

printf("\ne^%d = %.lf", x, r);

return 0;
}
