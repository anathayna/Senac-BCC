#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TipoNo{
  int conteudo;
  struct TipoNo* prox;
};
typedef struct TipoNo No;

void imprime(No *inicio){
  No *p;
  for(p=inicio; p != NULL; p =p->prox){
    printf("%d\n", p-> conteudo);
  }
}

No* inicializa(void){
  return NULL;
}

No* insere(No* inicio, int n){
  No* novo = (No*)malloc(sizeof(No));
  novo -> conteudo = n;
  novo -> prox = inicio;
  return inicio;
}

int main() {
  No *n0, *n1, *n2;

  n0 = (No*) malloc(sizeof(No));
  n1 = (No*) malloc(sizeof(No));
  n2 = (No*) malloc(sizeof(No));

  n0->conteudo = 3;
  n0->prox = n1;

  n1->conteudo = 3;
  n1->prox = n2;

  n2->conteudo = 3;
  n2->prox = NULL;

  imprime(n0);

  free(n0);
  free(n1);
  free(n2); 
}