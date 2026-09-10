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
    int num;
    printf("\n\nEnter the number you want to checked :");
    scanf("%d",&num);
    
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        count++;
    }
    
    printf("\n\nThe total number of checked integer is :%d",count);
    
    return 0;
}