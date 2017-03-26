#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int s,e,k,n,count=0,r;
    float p,a=0;
    cin>>s>>e>>k;
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
    cout<<count;
    return 0;
}
