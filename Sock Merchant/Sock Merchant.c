#include <stdio.h>
using namespace std;
int main(){
    int n,count=0;
    int p=789456;
scanf("%d",&n);
    
    int c[n];
    for(int i=0;i<n;i++){
scanf("%d",&c[i]);

    }
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            if(c[i]==c[j])
                {
                count++;
                c[j]=p;
                p++;
                break;
            }
        }
    }
  
printf("%d",count);
    return 0;
}