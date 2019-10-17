#include <stdio.h>
#define MAX 10
 
int main()
{
  int v[MAX], temp[MAX], i, j, k, n, size, l1, h1, l2, h2;
 
  printf("Tamanho vetor: ");
  scanf("%d", &n);
 
  for(i=0; i<n; i++){
    printf("Digite o valor de %d : ", i+1);
    scanf("%d", &v[i]);
  }
 
  printf("Vetor: ");
  for( i=0 ; i<n ; i++)
    printf("%d ", v[i]);
 
  for(size=1; size < n; size=size*2 ){
    l1=0;
    k=0; 
    while( l1+size < n){
      h1=l1+size-1;
      l2=h1+1;
      h2=l2+size-1;
 
      if( h2>=n )
        h2=n-1;
      
      i=l1;
      j=l2;
      
      while(i<=h1 && j<=h2 ){
        if( v[i] <= v[j] )
          temp[k++]=v[i++];
        else
          temp[k++]=v[j++];
      }
      
      while(i<=h1)
        temp[k++]=v[i++];
      while(j<=h2)
        temp[k++]=v[j++];
 
      l1=h2+1;
    }
 
    for(i=l1; k<n; i++)
      temp[k++]=v[i];
 
    for(i=0;i<n;i++)
      v[i]=temp[i];
 
    printf("\nOrdenação: ");
    for( i = 0 ; i<n ; i++)
      printf("%d ", v[i]);
    
  }
  
  printf("\nVetor Ordenado:\n");
  for( i = 0 ; i<n ; i++)
    printf("%d ", v[i]);
  
  printf("\n");
  
  return 0;
}
