#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* w = (char *)malloc(512000 * sizeof(char));
    scanf("%s",w);
    int i=0,flag=0;
    while(w[i]!='\0'){
        if(w[i]==w[i+1]){flag=1;
                        break;}
            else if((w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'||w[i]=='y')&&(w[i+1]=='a'||w[i+1]=='e'||w[i+1]=='i'||w[i+1]=='o'||w[i+1]=='u'||w[i+1]=='y')){flag=1;
                                                                                                                                                                       break;}
       
        i++;
        
        
    }
    if(flag==1)printf("No");
    else if(flag==0)printf("Yes");
    
    return 0;
}