#include<iostream>
using namespace std;
int main()
    {
    int n,i,j,k,f;
    cin>>n;
    f=n;
    for(i=1;i<=n;i++,f--)
        {
        for(k=f;k>1;k--)
            cout<" ";
        for(j=i;j>0;j--)
            {
         cout<<"#";
        }
        cout<<"\n";
    }
}