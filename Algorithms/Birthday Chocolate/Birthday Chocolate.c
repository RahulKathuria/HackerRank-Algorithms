#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getWays(int squares_size, int* squares, int d, int m){
    int i,count=0;
    for(i=0;i<squares_size;i++){
        int p=m;
        int r=i;
        int sum=0;
        while(p--){
            sum=sum+squares[r];
            r++;
        }
        if(sum==d)count++;
        
    }
    return count;
}

int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d",&d,&m);
    int result = getWays(n, s, d, m);
    printf("%d\n", result);
    return 0;
}