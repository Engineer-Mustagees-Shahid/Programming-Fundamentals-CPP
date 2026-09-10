#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    printf("\nEnter the elements of the array :");
    int arr[n];
    for (int i=0;i<n; i++)
    {
    scanf("%d",&arr[i]);
    }
    int flag;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[n-(i+1)])
        flag=1;
        else
        flag=0;
    }
    
    if(flag==1)
    printf("\nThe array is symmetric.");
    else 
    printf("\nThe array is not symmetric.");
    
    return 0;
}