#include <stdio.h>
 
int soma(int n, int *v){
  if(n==1){
    return v[0];
  }else {
    return v[n-1] + soma(n-1, v);
  }
}
 
int main(void) {
  int num;
  int vetor[] = {5, 8, 3, 12, 7};
  printf("%d \n", soma(5, vetor));
}
