#include <stdio.h>
int main(){
    char s[100000];
    int count=1;
scanf("%d",&s);

    for(int i=0;s[i]!='\0';i++)
        {
        if(s[i]>='A'&&s[i]<='Z')
            count++;
    }
printf("%d",count);

    return 0;
}