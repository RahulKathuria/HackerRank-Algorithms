#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    int p=789456;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++){
       cin>>c[i];
    }
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            if(c[i]==c[j])
                {
                count++;
                c[j]=p;
                p++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}
