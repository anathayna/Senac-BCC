#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[3000], i, menor=1, num;
    float media, soma;

    for(i=0; i<=3000; i++){
        v[i]=rand()%3000;
        printf("v[%d]\n", v[i]);
        if(v[i]<menor!=0) // menor valor armazenado != 0
        {
          menor=v[i];
        }
        soma+=v[i];
        media=soma/3000; // média aritmética
    }
    printf("Média = %.4f \n", media);
    printf("Menor = %d \n", menor);
}
