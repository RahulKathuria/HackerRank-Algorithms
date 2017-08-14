#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[105];
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
        {
        if(a[i]==a[i+1]||((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'||a[i+1]=='y')))
            {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
