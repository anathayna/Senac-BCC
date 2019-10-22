#include <stdio.h>

int main(void) 
{
  int x, y;
  
  printf("Valor de x: ");
  scanf("%d", &x);
  
  printf("Valor de y: ");
  scanf("%d", &y);
  
    if(x == 0){
      printf("Sobre o eixo x");
    }
    else
      
      if(y == 0){
        printf("Sobre o eixo y");
      }
      else
      
        if(x>0 && y>0){
          printf("1º Quadrante");
        }
        else
        
          if(x<0 && y>0){
            printf("2º Quadrante");
          }
          else
          
            if(x>0 && y<0){
              printf("3º Quadrante");
            }
            else{
              printf("4º Quadrante");
            }
  
  return 0;
}