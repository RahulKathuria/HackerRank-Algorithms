#include<stdio.h>
int main(){
    int i,j,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(i=0;i<n;i++){
        
        if(a[i+2]==0){
            
            count++;
            i=i+1;
       }
       else if(a[i+2]==1&&a[i+1]==0) {
            count++;
                         
              //i=i+1;
                           }
       
    }
    printf("%d",count);
}