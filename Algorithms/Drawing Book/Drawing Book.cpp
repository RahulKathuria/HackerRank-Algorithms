#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    int count_f=0;
    int count_b=0;
    for(int i=1;i<=n;i+=2)
        {
        if(p>i)
            count_f++;
    }
    for(int i=n;i>=1;i-=2)
        {
        if(p<i&&p<i-1)
            count_b++;
    }
    if(count_f>count_b)
        cout<<count_b;
    else cout<<count_f;
    return 0;
}
