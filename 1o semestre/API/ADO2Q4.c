#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[20], i, num, maior=1, menor=1, c=0, diferenca;

    srand(time(NULL));
    for (i=0; i < 20; i++)
    {
        v[i] = rand() % 200;

        if(v[i]>100&&v[i]<200)
        {
            printf("Sequência %d: %d\n", i, v[i]);
            menor = v[i];
            if(v[i]<menor)
           {
                menor=v[i];
           }
           if(v[i]>maior)
           {
                maior=v[i];
           }
        }
    }

    diferenca = maior - menor;

  printf("\nMaior: %d \n", maior);
  printf("Menor: %d \n", menor);
  printf("Diferença: %d \n", diferenca);
}

