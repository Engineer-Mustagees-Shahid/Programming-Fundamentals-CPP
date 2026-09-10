#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array :");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=0)
        count++;
    }
    printf("\n\nThe total number of positive integer are :%d",count);
    
    int count_1=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        count_1++;
    }
    printf("\n\nThe total number of negative integers are :%d",count_1);
    
    int count_2=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0 && arr[i]!=0)
        count_2++;
    }
    printf("\n\nThe total number of even integers are :%d",count_2);
    
    int count_3=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        count_3++;
    }
    printf("\n\nThe total number of odd integers are :%d",count_3);
    
    
    return 0;
}