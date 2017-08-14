#include<stdio.h>
int main(){
    int t,n,i,h=1,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        h=1;
        if (n%2 == 0) {
            for(j=0;j<n/2;j++){
                h=h*2+1;
            }
             printf("%d\n",h);
    }
        h=1;
       if (n%2 == 1&&n!=1){ 
            for(j=0;j<(n+1)/2;j++){
            
                h=h*2+1;
        }
           
        printf("%d\n",h-1);
       }
         if (n==1) printf("%d",2);
       
       
        
        
    }
    h=1;
}