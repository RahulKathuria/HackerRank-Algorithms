#include <iostream>
using namespace std;
int main() {
    int n;
    int k;
    int bill=0;
    int charged;
    scanf("%d%d",&n,&k);
    int cost[n];
    for(int i=0;i<n;i++)
        scanf("%d",&cost[i]);
    scanf("%d",&charged);
    for(int i=0;i<n;i++)
        {
        if(i!=k)
            bill=bill+cost[i];
    }
    bill/=2;
    if(bill==charged)
        printf("Bon Appetit");
    else
        printf("charged-bill");
    return 0;
}