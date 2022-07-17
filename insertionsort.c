#include <stdio.h>
#include<time.h>
#define MAX 200000
void delay()
{
    int i,j,temp;
    for(i=0;i<1000000;i++)
        temp=32/33233;
    return;
}
void insert(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while(j>=0 && temp <= a[j])
        {   delay();
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{  clock_t start,end;
     int a[MAX],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {   a[i]= rand(); }
    start=clock();
    insert(a, n);
    end=clock();
    printf("\nAfter sorting array elements are - ");
    print(a, n);
    printf("\nTime taken: %f", (double)(end-start)/CLOCKS_PER_SEC );
    printf("\n");
    return 0;
}
