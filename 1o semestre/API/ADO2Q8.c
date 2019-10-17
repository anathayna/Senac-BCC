#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A[25], B[25],V[50], i, j=1;

    for(i=0;i<25;i++)
    {
       printf("A[%d]: ",i);
       scanf("%d",&A[i]);
       printf("B[%d]: ",i);
       scanf("%d",&B[i]);

       V[j] = A[i];
       V[j+1] = B[i];
       j = j + 2;
    }
    for(i=0;i<50;i++)
    {
       printf("V[%d]: %d\n",i,V[i]);
    }
}

