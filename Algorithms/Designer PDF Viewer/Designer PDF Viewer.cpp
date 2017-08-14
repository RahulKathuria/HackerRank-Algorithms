#include <iostream>
using namespace std;
int main(){
    int h[26];
    for(int i=0;i<26;i++){
       cin>>h[i];
    }
    char word[10];
    cin>>word;
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
    cout<<large*l;
    return 0;
}
