#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    int count_f=0;
    int count_b=0;
    for(int i=1;i<=n;i+=2)
        {
        if(p>i)
            count_f++;
    }
    for(int i=n;i>=1;i-=2)
        {
        if(p<i&&p<i-1)
            count_b++;
    }
    if(count_f>count_b)
printf("%d",count_b);
else printf("%d",count_f);
            return 0;
}