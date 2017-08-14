#include <iostream>
using namespace std;
int main(){
    int n;
    int k;
    int count=0;
    cin>>n>>k;
    int a[n];
    for(int a_i = 0;a_i < n;a_i++)
       cin>>a[a_i];
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            float p=(a[i]+a[j])/(k*1.0);
            int q=(a[i]+a[j])/k;
            if(p==q)
                count++;
        }
    }
    cout<<count;
    return 0;
}
