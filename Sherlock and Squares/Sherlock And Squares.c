#include<stdio.h>
#include<math.h>
int main()
{
    int t,p,n;
    long long int a,b;

    scanf("%d",&t);
    while(t>0)
    {
         scanf("%lld %lld",&a,&b);
          long long int  n=sqrt(a);
          long long int p=sqrt(b);
        if(n*n==a)printf("%d\n",p-n+1);
        else  printf("%d\n",p-n);
        t--;
    }

}