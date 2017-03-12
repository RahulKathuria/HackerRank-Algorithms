#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[10],p[10]; 
    

    int i,j;
    long int smallest,largest;
    for(i=0;i<5;i++){
           scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++){
        p[i]=0;
        for(j=0;j<5;j++){
            if(i!=j)p[i]=p[i]+a[j];
        else p[i]=p[i];
        }
    }
    
    smallest=p[0];
    largest=p[0];
    for(i=0;i<5;i++){
        if(p[i]<=smallest)smallest=p[i];
        
    }
     for(i=0;i<5;i++){
        
        if(p[i]>=largest)largest=p[i];
    }
    printf("%ld %ld",smallest,largest);
    return 0;
}