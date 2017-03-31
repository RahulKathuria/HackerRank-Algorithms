#include <iostream>
using namespace std;
int main(){
    char s[100000];
    int count=1;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
        {
        if(s[i]>='A'&&s[i]<='Z')
            count++;
    }
    cout<<count;
    return 0;
}
