#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, acima=0, abaixo=0, namedia=0;
    float notas[50], mediaalta, mediabaixa;

    for (i=0; i < 50; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);

	    if(notas[i]>10){
      printf(“Favor digitar uma nota valida”);
      system(“pause”);
      }

        mediaalta=6.6;
        mediabaixa=5.6;

        if(notas[i]==mediaalta)
        {
            acima++;
        }
        else if(notas[i]==mediabaixa)
        {
            abaixo++;
        }
    }

    printf("Pessoas 10%% acima: %d \n", acima);
    printf("Pessoas 10%% abaixo: %d \n", abaixo);
}

