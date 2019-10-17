#include <stdlib.h>
#include <stdio.h>
 
int verifica (int v[], int n) {  
 if (n > 1)
   for (int i = 1; i < n; i++)
       if (v[i-1] > v[i])
         return 0;    
       return 1;
}
 
int main(){
 
 int vetor[5] = {20,12,28,5,10};
 
 if(verifica(vetor, 5)){
   printf("Crescente");
 } else{
   printf("Nao crescente");
 }
 
 return 0;
}
