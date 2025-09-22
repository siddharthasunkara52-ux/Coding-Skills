#include<stdio.h>

int main()
{
    int arr[100],n,max1,max2;
    printf("Enter no.of Elements:");
    scanf("%d",&n);
    printf("Enter the Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    if(arr[0]>arr[1])
    {
        max1=arr[0];
        max2=arr[1];
    }
    else
    {
         max2=arr[0];
        max1=arr[1];
    }

    for(int i=2;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
            
        }

        else if(arr[i]>max2)
        {
            max2=arr[i];
        }

    }
printf("Fist Maximum:%d\nSecond Maximum:%d",max1,max2);
    



}
