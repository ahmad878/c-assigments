#include <stdio.h>
void sort(int arr[5])
{
    int temp;
    printf("Original array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr1[5];
    sort(arr1);
    
  
}
