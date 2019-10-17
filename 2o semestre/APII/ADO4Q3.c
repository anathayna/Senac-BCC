#include <stdio.h>
#define SIZE 10
 
void mergesort (int v[], int tmp[], int p, int r);
void merge (int v[], int tmp[], int p, int q, int r);
 
int main (void){
 int v[SIZE], tmp[SIZE], p, r, i;
 
 for(i=0;i<SIZE;i++){
     printf("Valor do vetor %d: ", i+1);
     scanf("%d", &v[i]);
 }
 p = 0;
 r = SIZE-1;
 
 mergesort(v, tmp, p, r);
 
 printf("\nVetor Ordenado:");
 printf("\n{");
 for(i=0;i<SIZE;i++){
   printf("%d,", v[i]);
 }
 printf("}");
 
 return 0;
}
 
void mergesort (int v[], int tmp[], int p, int r){
 if(p<r){
   int q = (p+r)/2;
   mergesort(v, tmp, p, q);
   mergesort(v, tmp, q+1, r);
   merge(v, tmp, p, q, r);
 }
}
 
void merge (int v[], int tmp[], int p, int q, int r){
 int i, j, t=p;
 
 for (i = p, j = 1 + q; i <= q && j <= r; ++t){ 
   if (v[i] < v[j]) tmp[t] = v[i++];
   else tmp[t] = v[j++];
 }
 
 if (i > q) i = j;
 for (; t <= r; ++t, ++i) tmp[t] = v[i];
 
 for (i = p; i <= r; ++i) v[i] = tmp[i];
}
