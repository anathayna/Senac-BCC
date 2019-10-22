#include <stdio.h>
#include "testeVetor.h"

int main(){
  int vetor[TAMANHO];
  int chave;

  //preenche o vetor com valores entre 0 e 100 e imprime o vetor
  //preencheVetor(vetor);
  preencheVetorSemRepetir(vetor);
  imprimeVetor(vetor);
  
  //solicita o valor da chave de busca
  printf("Entre com a chave de busca: ");
  scanf("%d", &chave);
  printf("voce entrou com: %d\n", chave);
  
  //verifica quantos valores no vetor são maiores que a chave de busca
  printf("Existem %d valores maiores que %d no vetor.\n",contaMaiores(vetor, chave), chave);
  
  //verifica se existe algum par de valores no vetor cuja soma seja igual a chave de busca.
  verificaSoma(vetor, chave);

  //printf("%d\n", RAND_MAX);
  return 1;
}