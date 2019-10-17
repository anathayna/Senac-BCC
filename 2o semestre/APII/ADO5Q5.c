#include <stdio.h>
 
int separa(int v[], int p, int r){
 int c=v[p], i=p+1, j=r, t;
 
 while(1){
   while(i<=r && v[i]>=c) ++i;
 
   while(c>v[j]) --j;
 
   if(i>=j) break;
 
   t=v[i], v[i]=v[j], v[j]=t;
 
   ++i; --j;
 }
 
 v[p]=v[j], v[j] = c;
 return j;
}
 
void quicksort(int v[], int p, int r){
 int j;
 if(p<r){
   j=separa(v, p, r);
   quicksort(v, p, j-1);
   quicksort(v, j+1, r);
 }
}
 
int main(void) {
 int a[] = { 1, 2, 3, 4, 5 };
 int n = 5;
 
   for (int i = 0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
  separa(a, 0, 4);
  for (int i = 0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
 
 quicksort(a, 0, 4);
 
 for (int i = 0; i<n; i++){
     printf("%d ", a[i]);
   }
   printf("\n");
 
 return 0;
}
