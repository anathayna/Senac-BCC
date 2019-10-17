#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v1[30], v2[30], i, pares, impares;

    srand(time(NULL));
    for (i=0; i < 30; i++)
    {
       printf("Digite um número: ");
       scanf("%d", &v1[i]);

        if(v1[i]%2==0)
        {
            printf("\n%d é par \n", v1[i]);
            v2[i]=v1[i]*2;
            printf("Dobro: %d \n\n", v2[i]);

            }else
           {
                printf("\n%d é impar \n", v1[i]);
                v2[i]=v1[i]*3;
                printf("Triplo: %d \n\n", v2[i]);
           }
        }
}

