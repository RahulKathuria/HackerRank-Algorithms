
#include<stdio.h>
int main(){
    int t,n,k,a[n],c,i,j;
    //printf("enter no. of test cases");
    scanf("%d",&t);
    for(i=0;i<t;i++){
        c=0;
        //printf("enter n & k");
        scanf("%d %d",&n,&k);
        //printf("enter the arrival time of students");
        for(j=0;j<n;j++){
            scanf("%d",&a[n]);
            if(a[n]<=0){
                c++;
            }
        }
        if(i>=1){
            printf("\n");
        }
        if(c>=k){
            printf("NO");
        }
        else printf("YES");
    }
    
    
}
