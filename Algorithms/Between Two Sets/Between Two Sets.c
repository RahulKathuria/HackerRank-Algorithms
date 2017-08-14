#include <stdio.h>
int main(){
    int counta=0,countb=0,count_total=0;
    int n;
    int m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
      scanf("%d",&b[i]);
    }
    int small=b[0];
    for(int i=0;i<m;i++)
        {
        if(small>b[0])
            small=b[0];
    }
    for(int i=1;i<=small;i++)
        {
        counta=0;
        countb=0;
        for(int j=0;j<n;j++)
            {
            if(i%a[j]==0)
                counta++;
            else counta--;
        }
        for(int j=0;j<m;j++)
            {
            if(b[j]%i==0)
                countb++;
            else countb--;
        }
        if(counta==n&&countb==m)
            count_total++;
    }
    printf("%d",count_total);
    return 0;
}