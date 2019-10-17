#include <stdio.h>
 
void bubble(int v[], int n) {
 int i, j, x;
 
   for (i=0; i<n; i++) {
       for (j=i+1; j<n; j++) {
           if (v[j] > v[i]) {
               x = v[j];
               v[j] = v[i];
               v[i] = x;
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
