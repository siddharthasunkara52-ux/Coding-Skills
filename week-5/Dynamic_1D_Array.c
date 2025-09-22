#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter no.of Elements:");
    scanf("%d",&n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    int max=*p;
    for(int i=1;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
    printf("\nMaximun Element in the array is:%d",max);
    int m;
    printf("\nEnter no.of Elements in new array:");
    scanf("%d",&m);
    
    p=(int *)realloc(p,m*sizeof(int));
    if(m>n)
    {
        printf("Enter Elements:");
        for(int i=n;i<m;i++)
        {
            scanf("%d",(p+i));
        }
        printf("Elements in new array are:");
         for(int i=0;i<m;i++)
        {
           printf("%d ",*(p+i));
        }
        for(int i=n;i<m;i++)
        {
            if(*(p+i)>max)
            {
                max=*(p+i);
            }
        }
         printf("\nMaximun Element in the new array is:%d",max);
    
    }
    else{
        max=*(p);
        for(int i=0;i<m;i++)
        {
           if(*(p+i)>max)
           {
            max=*(p+i);
           }
            
        }
          printf("\nMaximun Element in the new array is:%d",max);
    }
    free(p);
    return 0;
}