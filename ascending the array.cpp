#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    printf("\nEnter the size of the integer:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the elements of the array :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
         {
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
         }
        }
        
    }

    printf("\nYour modified array is :");
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

  return 0;
}