#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int h=1;
        for(int i=1;i<=n;i++)
            {
            if(i%2==0)
                h++;
            else
                h*=2;
        }
        cout<<h<<endl;
    }
    return 0;
}
