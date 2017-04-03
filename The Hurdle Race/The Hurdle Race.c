#include <stdio.h>
int main(){
    int n;
    int k;
scanf("%d%d",&n,&k);
    int height[n];
    for(int height_i=0;height_i<n;height_i++){
scanf("%d",&height[height_i]);
       cin>>height[height_i];
    }
    int max=height[0];
    for(int i=0;i<n;i++)
        if(max<height[i])
            max=height[i];
        if(max<=k)
printf("0");

        else
printf("%d",max-k);
    return 0;
}