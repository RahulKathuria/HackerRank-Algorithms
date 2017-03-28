#include<stdio.h>
int main(){
    int n,i,smallest;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    while(1){
         smallest=arr[0];
         int count=0;
        for(i=0;i<n;i++){

        if(arr[i]!=0)
            count++;
        }
        if(count==0){
            break;
        }
         printf("%d\n",count);
         for(i=1;i<n;i++){
            if(arr[i]<smallest&&arr[i]!=0)
            smallest=arr[i];
             if(smallest==0)
                 smallest=arr[i];
        }
        for(i=0;i<n;i++){
            if(arr[i]!=0)
                arr[i]=arr[i]-smallest;
        }
    }
}
