#include<stdio.h>
int fact(int n)
{
    if (n==0)
    {
        return 1;

    }
    else{
        return n*fact(n-1);
    }
}
int main()
{  
    int x, n;
    printf("Enter n:");
    scanf("%d", &n);
    x = fact(n);
    printf("Factoiral of %d id %d ",n,x);
    return 0;

}
