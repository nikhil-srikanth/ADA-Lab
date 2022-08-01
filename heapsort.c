#include <stdio.h>
#include<time.h>
#define max 10000

void swap(int *a, int *b) {

  int temp = *a;
  *a = *b;
  *b = temp;
}

void delay()
{
    int i,j,temp;
    for(i=0;i<2000000;i++)
        temp=32/33233;
}

void heapify(int arr[], int n, int i) {

  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < n && arr[left] > arr[largest])
    largest = left;
  if (right < n && arr[right] > arr[largest])

    largest = right;
  if (largest != i) {

    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  for (int i = n - 1; i >= 0; i--) {

    swap(&arr[0], &arr[i]);
    delay();
    heapify(arr, i, 0);
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main()
{
  int arr[max],m,i;
  clock_t start,end;
  printf("Enter the number of elements: ");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
      arr[i]=rand();
  }

  start=clock();
  heapSort(arr, m);
  end=clock();

  printf("\n\nSorted array is given in the following way \n");
  printArray(arr, m);
  printf("\nExecution time: %f",(double)(end-start)/CLOCKS_PER_SEC);

}
