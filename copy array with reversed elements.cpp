#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    printf("\n\nEnter the elements of the first array :");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0,j=n-1; i<n; i++,j--)
    {
        arr2[j]=arr1[i];
    }
    
    for (int i=0;i<n;i++)
    {
        printf("\n%d",arr1[i]);
    }
    
    printf("\n\n");
    printf("Copy array with reversed elements is : ");
    
    for (int i=0;i<n;i++)
    {
     printf("\n%d",arr2[i]);
    }
    
   return 0; 
}