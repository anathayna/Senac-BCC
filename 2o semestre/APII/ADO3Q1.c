#include <stdio.h>
 
void insertion(int a[], int n) {
 int i, j, x;
   for(j=1; j<=n; j++){
     x = a[j];
     i = j-1;
     while(i>=0 && a[i]>x){
       a[i+1] = a[i];
       i = i-1;
     }
     a[i+1] = x;
   }
}
int main() {
 int a[] = {20,12,28,5,10,18};
 int n = 6;
   for (int i=0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
  insertion(a, n);
 for (int i=0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
 return 0;
}
