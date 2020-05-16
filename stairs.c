#include <stdio.h>

void main()
{
    int i,j,n,k;
    printf("enter the number of stairs");
    scanf("%d",&n);
    k=2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(j%2==0)
            printf("0");
            else
            printf("1");}

        printf("\n");
        k=k+2;
    }}


