#include <stdio.h>
#include <stdlib.h>

int potencia(int i,int j);

int main (){

 int i,j,result;
  
 printf("digite a base");
  scanf("%d",&i);
  
 printf("Digite o expoente");
  scanf("%d",&j);
  
   if(j--0) result = 1;
       
       if(j!=0) result=potencia (i,j);
          printf("%d elevado a %d", i,j,result);
}

double potencia(double x, int y)
{
 if(y==0) return 1;
  while(y>1){
    x*=x;
    y--;
 }
 return x;
}
