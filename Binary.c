#include<stdio.h>
int main()
{
    int i, start, end, middle, n, search, array[100];
    printf("Enter n of element\n");
    scanf("%d",&n);
    printf("Enter %d numbers of array",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter element of search: \n");
    scanf("%d",&search);
    start=0;
    end=n-1;
    middle=(start+end)/2;
    while(start<=end)
    {        if(array[middle]<search)
        {
            start=middle+1;
        }
        else if(array[middle]==search)
        {
            printf("Element found at position %d",middle+1);
            break;
        }
        else if(array[middle]>search)
        {
            end=middle-1;
        }
        else
        {
            printf("Element found at position %d",middle+1);
            break;
        }
        middle=(start+end)/2;
    }
    if(start>end)
    {
        printf("Element not found is not available. \n");
    }
    return 0;
}