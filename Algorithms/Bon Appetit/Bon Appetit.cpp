#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    int bill=0;
    int charged;
    cin>>n>>k;
    int cost[n];
    for(int i=0;i<n;i++)
        cin>>cost[i];
    cin>>charged;
    for(int i=0;i<n;i++)
        {
        if(i!=k)
            bill=bill+cost[i];
    }
    bill/=2;
    if(bill==charged)
        cout<<"Bon Appetit";
    else
        cout<<charged-bill;
    return 0;
}
