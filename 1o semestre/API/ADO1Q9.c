#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c){

 float d;

 d = (b*b-4*a*c);

return d;
}

float raiz(float d){

 float r;

 r = sqrt(d);

return r;
}

void raizes(float a, float b, float c, float d, float r, float *x1, float *x2){

*x1 = ((- + r)/2 * a);
*x2 = ((- - r)/2 * a);

return ;
}

int main(){

float a, b, c, d, r, x1, x2;

printf("Digite o valor de a: ");
scanf("%f", &a);

printf("Digite o valor de b: ");
scanf("%f", &b);

printf("Digite o valor de c: ");
scanf("%f", &c);

d = delta(a, b, c);
r = raiz(d);

 if (d < 0){
   printf("\nValor de delta: %.2f",d);
   printf("\nNao existe raiz de delta\n");
 }
 else{
   if (d == 0){
     printf("\nValor de delta: %.2f",d);
     printf("\nRaiz de delta: %.2f",r);
     raizes(a, b, c, d, r, &x1, &x2);
     printf("\nTem uma raiz: x1=%.2f e x2=%.2f", x1, x2);
   }
   else{
     if (d > 0){
       printf("\nValor de delta: %.2f",d);
       printf("\nRaiz de delta: %.2f",r);
       raizes(a, b, c, d, r, &x1, &x2);
       printf("\nTem duas raizes: \nx1=%.2f \nx2=%.2f", x1, x2);
     }
   }
 }
return 0;
}



