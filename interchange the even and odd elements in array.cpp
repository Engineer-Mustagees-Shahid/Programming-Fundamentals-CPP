#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i+=2)
    {
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}