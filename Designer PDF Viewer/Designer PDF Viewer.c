#include <stdio.h>

int main(){
    int h[26];
    for(int i=0;i<26;i++){
    scanf("%d",&h[i]);
    }
    char word[10];
scanf("%d",&word);
    
    int l=strlen(word);
    int wh[l];
    for(int i=0;i<l;i++)
        {
        wh[i]=h[word[i]-97];
    }
    int large=wh[0];
    for(int i=1;i<l;i++)
        {
        if(large<wh[i])
            large=wh[i];
    }
printf("%d",large*l);
    
    return 0;
}