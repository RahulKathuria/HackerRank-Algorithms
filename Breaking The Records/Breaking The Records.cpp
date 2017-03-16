#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,min=0,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
        {
        int small=a[0];
        int large=a[0];
        for(int j=0;j<i;j++)
            {
            if(small>a[j])
                small=a[j];
            if(large<a[j])
                large=a[j];
        }
        if(a[i]<small)
            min++;
        if(a[i]>large)
            max++;
    }
    cout<<max<<" "<<min;
    return 0;
}