#include <iostream>
using namespace std;
int main(){
    long long int input[5];
    long long int small,large;
    long long int arr[5];
    long long int sum=0;
    for(int i=0;i<5;i++)
        cin>>input[i];
    for(int i=0;i<5;i++)
        sum=sum+input[i];
    for(int i=0;i<5;i++)
        arr[i]=sum-input[i];
    small=arr[0];
    for(int i=1;i<5;i++)
        {
        if(small>arr[i])
            small=arr[i];
    }
    large=arr[0];
    for(int i=1;i<5;i++)
        {
        if(large<arr[i])
            large=arr[i];
    }
    cout<<small<<" "<<large;
    return 0;
}
