#include<stdio.h>

void selectionSort(int arr[], int size);

int main(){
  int size = 10;
  int arr[size];

  printf("Enter array entries (10): ");
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }

  printf("Entered array is: ");
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  selectionSort(arr, size);
  return 0;
}

void selectionSort(int arr[], int size){
  int temp;
  for(int i = 0; i < size - 1; i++){
    int index = i;
    for(int j = i+1; j < size; j++){
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
  }

  printf("Sorted array is: ");
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
}

