#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 10

void inicializaObterNumero(){//inicializa o gerador de numeros randomicos
  srand(time(NULL));
}

double obterNumero(){//gera numeros randomicos entre 0 e 1
  int temp;
  temp=rand();
  return temp*1.0/RAND_MAX;
}

void preencheVetor(int *vetor){
  double temp;
  //inicializa o gerador de numeros aleatórios
  inicializaObterNumero();
  for(int i=0;i<TAMANHO;i++){
    //determina valores entre 0 e 100
    temp=100*obterNumero();
    vetor[i]=(int)temp;
  }
}

int verificaNumero(int valor, int* vetor, int posicao){
  for(int i=0; i<posicao; i++){
    if(vetor[i]==valor){
      return 1;
    }
  }
  return 0;
}

void preencheVetorSemRepetir(int *vetor){
  int temp;
  int i, teste;
  //inicializa o gerador de numeros aleatórios
  inicializaObterNumero();
  i=0;
  while(i!=TAMANHO){
    //determina valores entre 0 e 100
    temp=(int)100*obterNumero();
    teste=verificaNumero(temp,vetor, i);
    if(teste==0){
      vetor[i]=temp;
      i++;
    }
  }
}

/*
void criaVetor(int *vetor){
  vetor=(int*)malloc(TAMANHO*sizeof(int));
}
*/

void imprimeVetor(int *vetor){
  printf("[ ");
  for(int i=0; i<TAMANHO; i++){
    printf("%d ",vetor[i]);
    if(i>0 && i%10==0){
      printf("\n");
    }
  }
  printf("]\n");
}

int contaMaiores(int *vetor, int chave){
  int contador=0;
  for(int i=0; i<TAMANHO; i++){
    if(vetor[i]>chave){
      contador++;
    }
  }
  return contador;
}

void verificaSoma(int *vetor, int chave){
   for(int i=0; i<TAMANHO-1; i++){
      for(int j=i+1; j<TAMANHO; j++){
        if((vetor[i]+vetor[j])==chave){
            printf("Na posição %d e %d a soma dos valores %d e %d é igual a chave %d\n",i, j, vetor[i], vetor[j], chave);
        }
      }
    }
}