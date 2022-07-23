#include <stdio.h>
#include<time.h>
#define MAX 20000
void delay()
{
    int i,temp;
    for(i=0;i<1000000;i++)
        temp=32/33233;
    return;
}

int main()
{
int a[MAX], k, n, i, j, position, swap;
printf("Enter number of elements:");
scanf("%d", &n);
for (i = 0; i < n; i++)
 {  a[i]= rand(); }


clock_t start=clock();
for(i = 0; i < n - 1; i++)
{delay();
position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}
clock_t end=clock();


printf("Sorted Array: ");
for(i = 0; i < n; i++)
printf("%d ", a[i]);
printf("\nExecution time: %f",(double)(end-start)/CLOCKS_PER_SEC);
return 0;
}
