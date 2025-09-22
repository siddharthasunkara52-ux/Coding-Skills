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
    printf("Original Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
        if(i<j)
        {
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
   }
printf("Transpose of Matrix is:\n");
 for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}