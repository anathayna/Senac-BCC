#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5], i, media=0, num, vpar=0, vimpar=0, soma;

    for(i=0; i<5; i++)
    {
        vetor[i] = rand() % 5 ;
        if(vetor[i]%2==0){
        vpar++;
        }else{
        vimpar++;
        }
        printf("%d \n", vetor[i]);
        soma=soma+vetor[i];
    }
    media = soma/5;
    printf("%d s�o pares \n", vpar);
    printf("%d s�o impares \n", vimpar);
    printf("%d m�dia ", media);
}

