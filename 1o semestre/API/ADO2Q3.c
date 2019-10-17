#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[20], i, maior=1, c=0;

    srand(time(NULL));
    for (i=0; i<20; i++)
    {
        v[i] = rand() % 200;

        if(v[i]>100&&v[i]<200)
        {
            printf("Sequência %d: %d\n" ,i, v[i]);

            if(maior < v[i])
            {
                maior = v[i];
            }
        }
    }
printf("\nO maior número é %d \n", maior);

    for(c=maior; c > 0; c-- )
    {
        if(maior%c==0)
        {
            printf("\nDivisores: %d", c);
        }
    }
}

