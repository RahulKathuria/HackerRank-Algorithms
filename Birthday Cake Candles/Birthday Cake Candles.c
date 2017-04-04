#include <iostream>
using namespace std;
int main(){
    int n,count=0;
scanf("%d",&n);
    int height[n];
    for(int i=0;i<n;i++){
       scanf("%d",&height[i]);
    }
    int large=height[0];
    for(int i=0;i<n;i++)
    {
        if(large<height[i])
            large=height[i];
    }
    for(int i=0;i<n;i++)
        if(large<=height[i])
            count++;
    printf("%d",count);
    return 0;
}