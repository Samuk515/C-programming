#include<stdio.h>
int main()
{
    int array[100], item, i, n, loc=0;
    printf("Enter n of elements in an array:");
    scanf("%d",&n);
   printf("Enter array elemnets:\n");
   for(i=0; i<n; i++)
   {
    scanf("%d",&array[i]);

   }
   printf("Enter a number to ve searched:\n");
   scanf("%d",&item);
   printf("Linear search \n");
   for(i=0; i<n; i++)
   {
    if  (array[i]==item)
    {
        loc=i+1;
        break;
    }
   }
   if(loc>0)
   {
    printf("Search success, element found at %d position",loc);
   }
   else{
    printf("Searched element not found");
   }

}