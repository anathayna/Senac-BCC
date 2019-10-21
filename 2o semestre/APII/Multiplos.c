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
      printf("São múltiplos");
    }
    else{
      printf("Não são múltiplos");
    }
}