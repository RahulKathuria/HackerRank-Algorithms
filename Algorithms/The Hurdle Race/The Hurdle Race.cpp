#include <iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    int height[n];
    for(int height_i=0;height_i<n;height_i++){
       cin>>height[height_i];
    }
    int max=height[0];
    for(int i=0;i<n;i++)
        if(max<height[i])
            max=height[i];
        if(max<=k)
        cout<<"0";
        else
        cout<<max-k;
    return 0;
}
