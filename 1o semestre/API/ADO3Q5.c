#include <stdio.h>
#include <stdlib.h>

int num(int x){

 int i, soma=0;

   for(i=2; i<x; i++){

     soma=soma+i;
   }
return soma;
}

int main(){

int n, a=0;

printf("Digite um n�: ");
scanf("%d", &n);

a=num(n);

printf("\nA soma dos valores entre 1 e %d �: %d \n\n", n, a);

return 0;
}
