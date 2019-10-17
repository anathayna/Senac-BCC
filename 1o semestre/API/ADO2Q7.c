#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, m1,m2 , media, ponderada;

        printf("Digite a nota1: ");
        scanf("%f", &nota1);
        printf("Digite a nota2: ");
        scanf("%f", &nota2);

        m1=nota1*4;
        m2=nota2*6;

        media=m1+m2;
        ponderada=4+6;
        media=media/ponderada;


        printf("A nota 1 é %.2f \nA nota 2 é %.2f \nA média é: %.2f ",nota1,nota2, media);
}

