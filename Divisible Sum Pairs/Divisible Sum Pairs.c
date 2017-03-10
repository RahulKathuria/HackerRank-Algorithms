#include<stdio.h>
int main()
    {
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int i,j,b,z=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            b=(a[i]+a[j])%k;
            if(i<j&&b==0)
                {
            z++;
            }
        }
    }
    printf("%d",z);
}