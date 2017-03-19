#include <iostream>
using namespace std;
int main(){
   int n,i;
    cin>>n;
    int a[n];
    int sum=0;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        sum=sum+a[i];
        }
    cout<<sum;
}
