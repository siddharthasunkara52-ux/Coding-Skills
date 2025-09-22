#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int t1=(n-1)/3;
    int t2=(n-1)/5;
    int t3=(n-1)/15;
    int  s1 = 3 * t1 * (t1  + 1) / 2;
    int  s2 = 5 * t2 * (t2  + 1) / 2;
    int  s3 = 15 * t3 * (t3  + 1) / 2;
   int  result = s1 + s2 - s3;
   printf("%d",result);
}
