#include<stdio.h>
#include<stdlib.h>

void modify(int*,int);

int main()
{
    int arr[10];
    printf("\nEnter the elements of the array :");
    for (int i=0;i<10; i++)
    {
    scanf("%d",&arr[i]);
    }
    modify(arr,10);
    
    for (int i=0;i<10; i++)
    {
    printf("\n%d",arr[i]);
    }
    
    return 0;
}

void modify(int *arr,int size)
{
     for(int i=0; i<size; i++)
    {
        arr[i]=arr[i]*3;
    }

}