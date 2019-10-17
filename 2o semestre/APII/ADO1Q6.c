#include <stdio.h>
 
int binario(int num){
  if(num<=1){
    return num;
  }
  else{
   return num%2+binario(num/2)*10;
  }
}
 
int main(void) {
  int n = 5;
  printf("%d \n", binario(n));
}

7.
#include <stdio.h>
 
int comb(int n, int k){
  if(k==1){
    return n;
  }
  else if(k==n){
    return 1;
  }
  else{
    return comb(n-1, k-1) + comb(n-1, k);
  }
}
 
int main(void) {
  int n = 15, k = 5;
  printf("%d\n", comb(n,k));
}
