#include <stdio.h>
void max(int arr[4])
{
    int max=arr[0];
    for(int i=0; i<4;i++)
    {
       if(arr[i]>max)
       {
           max=arr[i];
          
       }
    }
    printf("Maximum number is: %d\n",max);
    
}
void min(int array[4])
{
    int min=array[0];
    for(int i=0;i<4;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
      printf("Minimum number is: %d\n",min);
}
int main()
{
    int arr1[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&arr1[i]);
    }
    max(arr1);
    for(int i=0;i<4;i++)
    {
         printf("Enter value %d:",i+1);
        scanf("%d",&arr1[i]);
    }
    min(arr1);
    return 0;
}
