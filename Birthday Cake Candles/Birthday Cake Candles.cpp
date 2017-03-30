#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int height[n];
    for(int i=0;i<n;i++){
       cin>>height[i];
    }
    int large=height[0];
    for(int i=0;i<n;i++)
    {
        if(large<height[i])
            large=height[i];
    }
    for(int i=0;i<n;i++)
        if(large<=height[i])
            count++;
    cout<<count;
    return 0;
}
