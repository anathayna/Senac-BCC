#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  int a, b;
  
  printf("Digite um valor para A: ");
  scanf("%d", &a);
  
  printf("Digite um valor para B: ");
  scanf("%d", &b);
  
    if(a%b==0 && b%a==0){ // resto zero
      printf("S�o m�ltiplos");
    }
    else{
      printf("N�o s�o m�ltiplos");
    }
}