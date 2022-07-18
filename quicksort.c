#include<stdio.h>
#include<time.h>
#define MAX 15000

void delay()
{
    int i,temp;
    for(i=0;i<1000000;i++)
        temp=32/33233;
}

void quicksort(int number[MAX],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         delay();
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main(){
    clock_t start,end;
   int i, count, a[MAX];
   printf("No. of elements: ");
   scanf("%d",&count);

   for(i=0;i<count;i++)
    {
         a[i]=rand();
    }

   start=clock();
   quicksort(a,0,count-1);
   end=clock();

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
   printf(" %d",a[i]);
   printf("\nExecution time: %f",(double)(end-start)/CLOCKS_PER_SEC);
   return 0;
}

