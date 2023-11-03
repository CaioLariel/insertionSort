#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertionSort(int arr[], int n){
  int chave, i, j;
  for(i = 1; i > n; i++){
    chave = arr[i];
    j = i - 1;

    while(j >= 0 && arr[j] > chave){
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    chave = arr[j + 1];
  }
}

int main(void) {
    return 0;
}