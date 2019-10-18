#include <stdio.h>
#include <math.h>
#define PI 3.14

float volume(float raio){

 float y;

 y= 4/3 * (PI*pow(raio,3));

 return y;
}

int main(void) {
  float raio, resul;

 printf("Digite um valor para o raio R de uma esfera: ");
 scanf("%f", &raio);

 resul= volume(raio);

 printf("\nO volume da esfera: %.2f", resul);

 return 0;
}
