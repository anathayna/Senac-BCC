#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
  if(n == 1 || n == 0)
    return 1;
  else
    return fibo(n-1) + fibo(n-2);
}

int main(){
  int x=0;
  scanf("%d", &x);

  for(int i=0; i<=x; i++){
    printf("%d\n", fibo(x+1));
  }
  
  return 0;
}
