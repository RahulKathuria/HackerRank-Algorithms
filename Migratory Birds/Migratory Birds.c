#include <stdio.h>
int main(){
    int n;
scanf("%d",&n);

    int a[n],count[5]={0};
    for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
    int large=0;
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<n;j++)
            {
            if(i+1==a[j])
                count[i]++;
        }
    }
    for(int i=0;i<5;i++)
        {
        if(count[large]<count[i])
            large=i;
    }
printf("%d",large+1);

    return 0;
}