#include <stdio.h>
 
int somatoria(int i){
  if(i==1){
    return i;
  }
  else{
    return i*i+ somatoria(i-1);
  }
}
 
int main(void) {
  int n = 5, i=5;
  printf("%d \n", somatoria(i));
  return 0;
}
