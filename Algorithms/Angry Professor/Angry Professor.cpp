#include<iostream>
using namespace std;
int main()
    {
    int t,n,i,k,c;
    cin>>t;
  
    while(t--)
        {
          c=0;
    cin>>n>>k;
        int a[1000];
        
        for(int j=0;j<n;j++)
            {
            scanf("%d",&a[j]);
        
        
            if(a[j]<=0){
                c++;}
        }
        if(c<k)
            cout<<"YES"<<endl;
        else if(c>=k)
            cout<<"NO"<<endl;
    }
}