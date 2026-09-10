#include<stdio.h>
#include<stdlib.h>

int smallest(int*,int*,int*);

int main()
{
    int small=0,n;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :");
    int arr[n];
    for (int i=0;i<n; i++)
    {
    scanf("%d",&arr[i]);
    }
    smallest(arr,&n,&small);
    
    printf("\nThe smallest number is : %d",small);
    
    return 0;
}

int smallest(int *arr,int *size, int *small)
{
     for(int i=0; i<*size-1; i++)
    {
        if(arr[i] > arr[i+1])
        *small = arr[i+1];
    }
    return (*small);
}