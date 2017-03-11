#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int a[n];
    int flag=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        {
      flag=0;
        for(int j=1;j<3;j++)
            {
            if((a[i]+j)%5==0&&(a[i]+j)>=40)
            { flag=1;
             printf("%d\n",a[i]+j);
             break;
            }
        }
      if(flag==0)
      printf("%d\n",a[i]);
    }
    return 0;
}
