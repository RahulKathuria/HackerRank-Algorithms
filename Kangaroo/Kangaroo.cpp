#include <iostream>
using namespace std;
int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=x1,j=x2;;i+=v1,j+=v2)
        {
        if(i==j)
            {
            cout<<"YES";
            return 0;
        }
        else if(i!=j&&i>=100000000)
            {
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}
