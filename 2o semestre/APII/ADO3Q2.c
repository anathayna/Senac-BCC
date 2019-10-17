#include <stdio.h>
 
void bubble(int v[], int n) {
 int i, j, x;
   for (i=1; i<n; i++) {
       for (j=0; j<n-1; j++) {
           if (v[j] > v[j+1]) {
               x = v[j];
               v[j] = v[j+1];
               v[j+1] = x;
           }
       }
   }
}
int main() {
 int a[] = {20,12,28,5,10,18};
 int n = 6;
   for (int i=0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
  bubble(a, n);
 for (int i=0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
 return 0;
}
