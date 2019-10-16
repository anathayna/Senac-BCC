package ordenacaoPckg;

import java.util.Scanner;
import java.util.Random;
import java.util.ArrayList;
import java.util.Arrays;

/**
 *
 * @author dionathan.nakamura
 */
public class Main {
//------------------------------------------------------------------------------
    public static ArrayList<Integer> computeHops(int n) {
        // using Marcin Ciura's gap sequence
        ArrayList<Integer> hops = new ArrayList<>(Arrays.asList(701, 301, 132, 57, 23, 10, 4, 1));
/*
        // using Knuth's gap sequence
        ArrayList<Integer> hops = new ArrayList<Integer>();
        int h = 1;

        while(h<n)
            h = h * 3 + 1;

        while(h>0){
            h = ( h - 1 ) / 3;
            hops.add(h);
        }
*/
        System.out.print("\nVetor de hops: ");

        for (int i = 0; i < hops.size(); i++)
            System.out.print(hops.get(i) + " ");

//        for (int i : hops)
//            System.out.print(i + " ");

//        while (hops.hasNext())
//            System.out.print(hops.next() + " ");

//        hops.stream().forEach((i) -> {
//            System.out.print(i + " ");
//        });

        return hops;
    }

//------------------------------------------------------------------------------
    public static void shellSort(int[] vetor, int n) {
        int i, j, eleito;
        ArrayList<Integer> hops = computeHops(n);

        for (int h : hops) {
            for (i=h; i<n; i++) {
                eleito = vetor[i];
                j = i;
                while (j>=h && vetor[j-h]>eleito) {
                    vetor[j] = vetor[j-h];
                    j = j - h;
                }
                vetor[j] = eleito;
            }
        }
    }

//------------------------------------------------------------------------------
    public static void insertionSort(int[] vetor, int n) {
        int i, j, eleito;
        for (i=1; i<n; i++) {
            eleito = vetor[i];
            j = i;
            while (j>=1 && vetor[j-1]>eleito) {
                vetor[j] = vetor[j-1];
                j--;
            }
            vetor[j] = eleito;
        }
    }

//------------------------------------------------------------------------------
public static void selectionSort(int[] array, int n) {
    for (int i=0; i<n-1; i++) {
        int m = i;

        for (int j=m+1; j<n; j++)
                    if (array[j] < array[m]){
                            m = j;
                    }

                int    t = array[i];
                array[i] = array[m];
                array[m] = t;
    }
}

//------------------------------------------------------------------------------
public static void bubbleSortA1(int[] vetor, int n) {
  int aux;
  for(int i=n-1; i>=0; i--)
    for(int j=0; j<n-1; j++)
      if(vetor[j] > vetor[j+1]) {
        aux        = vetor[j];
        vetor[j]   = vetor[j+1];
        vetor[j+1] = aux;
      }
}

//------------------------------------------------------------------------------
public static void bubbleSortA2(int[] vetor, int n) {
  int aux;
  for(int i=n-1; i>=0; i--)
    for(int j=0; j<i; j++)
      if(vetor[j] > vetor[j+1]) {
        aux        = vetor[j];
        vetor[j]   = vetor[j+1];
        vetor[j+1] = aux;
      }
}

//------------------------------------------------------------------------------
public static void bubbleSortA3(int[] vetor, int n) {
  int aux;
  for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
      if(vetor[i] > vetor[j]) {
        aux      = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
}

//------------------------------------------------------------------------------
public static void bubbleSortB1(int[] vetor, int n) {
  boolean trocou = true;
  int aux;
  while(trocou) {
    trocou = false;
    for(int i=0; i<n-1; i++)
      if(vetor[i] > vetor[i+1]) {
        aux        = vetor[i];
        vetor[i]   = vetor[i+1];
        vetor[i+1] = aux;
        trocou     = true;
      }
  }
}

//------------------------------------------------------------------------------
public static void bubbleSortB2(int[] vetor, int n) {
  boolean trocou = true;
  int aux;
  while(trocou) {
    n--;
    trocou = false;
    for(int i=0; i<n; i++)
      if(vetor[i] > vetor[i+1]) {
        aux        = vetor[i];
        vetor[i]   = vetor[i+1];
        vetor[i+1] = aux;
        trocou     = true;
      }
  }
}

//------------------------------------------------------------------------------
public static void bubbleSortB3(int[] vetor, int n) {
  int ultima = n-1;
  int aux;
  while(ultima!=0) {
    n      = ultima;
    ultima = 0;
    for(int i=0; i<n; i++)
      if(vetor[i] > vetor[i+1]) {
        aux        = vetor[i];
        vetor[i]   = vetor[i+1];
        vetor[i+1] = aux;
        ultima     = i;
      }
  }
}

//------------------------------------------------------------------------------
public static void quickSort(int[] vetor, int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = vetor[(left+right)/2];

    while (i < j) {
        while (vetor[i] < pivot)
            i++;
        while (vetor[j] > pivot)
            j--;
        if (i <= j) {
            tmp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = tmp;
            i++;
            j--;
        }
    }

    if (j> left)
        quickSort(vetor, left, j);
    if (i < right)
        quickSort(vetor, i, right);
}

//------------------------------------------------------------------------------
public static void mergeSort(int[] array, int inicio, int fim) {
    if (fim <= inicio)
        return;

    int meio = (inicio + fim) / 2;
    mergeSort(array, inicio, meio);
    mergeSort(array, meio + 1, fim);

    int[] A = new int[meio - inicio + 1];
    int[] B = new int[fim - meio];
    for (int i = 0; i <= meio - inicio; i++) {
        A[i] = array[inicio + i];
    }
    for (int i = 0; i <= fim - meio - 1; i++) {
        B[i] = array[meio + 1 + i];
    }
    int i = 0;
    int j = 0;
    for (int k = inicio; k <= fim; k++) {
        if (i < A.length && j < B.length) {
            if (A[i] < B[j]) {
                array[k] = A[i++];
            } else {
                array[k] = B[j++];
            }
        } else if (i < A.length) {
            array[k] = A[i++];
        } else if (j < B.length) {
            array[k] = B[j++];
        }
    }
}

//------------------------------------------------------------------------------
    private static void mergeSort2(int[] vector, int left, int right) {
        int n = right + 1;
        int[] tmp = new int[n];
        mergeSortSplit(vector, tmp,  left,  right);
    }

//------------------------------------------------------------------------------
    private static void mergeSortSplit(int[] vector, int[] tmp, int left, int right) {
        if (left < right) {
            int center = (left + right) / 2;
            mergeSortSplit(vector, tmp, left, center);
            mergeSortSplit(vector, tmp, center + 1, right);
            merge(vector, tmp, left, center + 1, right);
        }
    }

//------------------------------------------------------------------------------
    private static void merge(int[] vector, int[] tmp, int left, int right, int rightEnd) {
        int leftEnd = right - 1;
        int k = left;
        int num = rightEnd - left + 1;

        while (left <= leftEnd && right <= rightEnd)
            if (vector[left] < vector[right])
                tmp[k++] = vector[left++];
            else
                tmp[k++] = vector[right++];

        while (left <= leftEnd) // Copy rest of first half
            tmp[k++] = vector[left++];

        while (right <= rightEnd) // Copy rest of right half
            tmp[k++] = vector[right++];

        for (int i = 0; i < num; i++, rightEnd--) // Copy tmp back
            vector[rightEnd] = tmp[rightEnd];
    }

//------------------------------------------------------------------------------
    public static void main(String[] args) {
        Scanner Entrada   = new Scanner(System.in);
        Random  Aleatorio = new Random();

        int n;
//      System.out.print("Digite o valor de N: ");
//      n = Entrada.nextInt();
        n = 60;
        int[] vetor = new int[n];

        for (int i=0; i<n; i++)
//          vetor[i] = n-i;
            vetor[i] = Aleatorio.nextInt(n/4) + 1;

        System.out.println("\nVetor original:");
        for (int i=0; i<n; i++)
            System.out.print(vetor[i] + " ");

//        shellSort    (vetor,n);
//        insertionSort(vetor,n);
//        selectionSort(vetor,n);
//        bubbleSortA1 (vetor,n);
//        bubbleSortA2 (vetor,n);
//        bubbleSortA3 (vetor,n);
//        bubbleSortB1 (vetor,n);
//        bubbleSortB2 (vetor,n);
//        bubbleSortB3 (vetor,n);
//        quickSort    (vetor,0,n-1);
//        mergeSort    (vetor,0,n-1);
        mergeSort2   (vetor,0,n-1);

        System.out.println("\nVetor de saida:");
        for (int i=0; i<n; i++)
            System.out.print(vetor[i] + " ");

        System.out.println("");
    } // main

} // class

/* 
Class Pessoa {
  int idade;      //atributos
  float peso;
  correr();       //métodos
  dormir();
}

Classe Prof extend Pessoa{
  programaprova();          //extendeu as caracteristicas de outra classe
}
*/