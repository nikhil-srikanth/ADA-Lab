#include<stdio.h>

int main()
{  double HCF;
    int n1,n2;
    printf("Enter numbers to fing gcd: ");
    scanf("%d %d", &n1,&n2);
    HCF=hcf(n1,n2);
    printf("GCD=%.3f", HCF);

}

hcf(int m,int n)
{
    if(n==0)
        return m;
    else
        return(hcf(n,m%n));
}
