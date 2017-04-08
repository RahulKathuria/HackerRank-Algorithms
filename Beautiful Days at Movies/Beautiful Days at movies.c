#include <iostream>
using namespace std;
int main() {
    int s,e,k,n,count=0,r;
    float p,a=0;
	scanf("%d%d%d",&s,&e,&k);
    for(int i=s;i<=e;i++)
        {a=0,n=0,r=i;
        while(r>0){
            n=r%10;
            a=a*10+n;
            r=r/10;
        }
         
         p=(float)(abs(i-a)/k);
         int c=(int)(abs(i-a)/k);
         if(p==c)
             {
             count++;
         }
    }
printf("%d",count);
    return 0;
}