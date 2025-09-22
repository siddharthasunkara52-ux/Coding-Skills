#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int m,n;
    printf("Enter no.of rows and coloumns:");
    scanf("%d %d",&m,&n);
    int **p;
    p=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        *(p+i)=(int*)malloc(n*sizeof(int));

    }
    printf("Enter the Elements:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }

    printf("Elements are:\n");
  
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d ",(*(*(p+i)+j)));
        }
        printf("\n");
    }
   // Free each allocated row
for (int i = 0; i < m; i++) {
    free(*(p + i));
}

// Then free the array of pointers
free(p);
return o;
}