#include <stdio.h>
void calculate(int arr[10])
{
     int max=arr[0];
        int min=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
}
int main()
{
    int arr1[10];
    printf("Enter 10 values:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    calculate(arr1);
    
    return 0;
}
