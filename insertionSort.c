#include<stdio.h>

void insertionSort(int arr[], int size);

int main(){
  int size = 10;
  int arr[size];
  
  printf("Enter array entries: ");
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }

  printf("Entered arrays: ");
  for(int i = 0; i < size; i ++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  insertionSort(arr, size);

  return 0;
}

void insertionSort(int arr[], int size){
      for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
  printf("Sorted array is: ");
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
}
