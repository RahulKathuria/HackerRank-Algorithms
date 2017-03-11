#include<stdio.h>
int main()
    {
    int n,i,j,k,f;
    scanf("%d",&n);
    f=n;
    for(i=1;i<=n;i++,f--)
        {
        for(k=f;k>1;k--)
            printf(" ");
        for(j=i;j>0;j--)
            {
            printf("#");
        }
        printf("\n");
    }
}