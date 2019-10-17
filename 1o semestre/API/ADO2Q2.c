#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[500], i, impar, num, vimpar=0;

    printf("Ímpares: \n");
    srand(time(NULL));
    for(i=0; i<500; i++)
    {
        v[i]=rand() % 500 ;
        if(v[i]%2!=0){
         impar=v[i];
         vimpar++;
        }
        printf("%d \n", impar);
    }
    printf("\n%d são impares", vimpar);
}

