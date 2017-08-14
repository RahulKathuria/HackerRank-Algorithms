#include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=0;i<n;i++)
        {
      flag=0;
        for(int j=1;j<3;j++)
            {
            if((a[i]+j)%5==0&&(a[i]+j)>=40)
            { flag=1;
             cout<<a[i]+j<<endl;
             break;
            }
        }
      if(flag==0)
      cout<<a[i]<<endl;
    }
    return 0;
}
