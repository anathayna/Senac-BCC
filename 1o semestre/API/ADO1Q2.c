#include <stdio.h>
#include <math.h>

float menor(float a, float b) {

 if(a < b)
   return a;
 else
   return b;
}

float main() {
  float x, y;

 printf("Digite um valor x:");
 scanf("%f", &x);

 printf("Digite um valor y:");
 scanf("%f", &y);

 printf("Menor: %.0f", menor(x, y));

 return 0;
}
