#include <stdio.h>
 
int mdc(int x, int y){
  if(x==y){
    return x;
  }else if (x < y){
    return mdc(y, x);
  }
  else{
    return mdc(x-y, y);
  }
}
 
int main(void) {
  int x = 16, y = 24;
  printf("%d \n", mdc(x, y));
}
