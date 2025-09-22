#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int ps=0,os=0,sum=0;
    for(i=0;i<n;i++)
    {
       ps+=arr[i][i];
       os+=arr[i][n-i-1];
    }
    sum=ps+os;
    if(n%2==1)
    {
       sum-=arr[n/2][n/2]; 
    }

    printf("Sum=%d",sum);
}