#include<stdio.h>
int main(){
    int i,j,k,count=0,n,d;
    scanf("%d%d",&n,&d);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    for(int j = 0; j < n; j++){
        for(int k= j+1; k < n; k++){
            if(a[k] - a[j] == d){
                for(int p = k+1; p < n; p++){
                    if(a[p] - a[k] == d){
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
}