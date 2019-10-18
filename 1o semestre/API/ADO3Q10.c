#include <stdio.h>
#include <math.h>

int triangulo(int a, int b, int c){

 int x;

 if(a < b+c && b < a+c && c < a+b){
   printf("\nOs valores %d, %d e %d formam um triangulo!", a, b, c);
 }
 else{
   printf("\nOs valores %d, %d e %d NAO formam um triangulo!", a, b, c);
 }

 return x;
}

int main(void) {
  int a, b, c, resul;

 printf("Digite um valor: ");
 scanf("%d", &a);
  printf("Digite um valor: ");
 scanf("%d", &b);
  printf("Digite um valor: ");
 scanf("%d", &c);

 resul=triangulo(a,b,c);

 return 0;
}

