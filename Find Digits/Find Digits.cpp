#include<iostream>
using namespace std;
int main()   
{  
      int t;  
      int M,N,count,rem;  
      cin>>t;  
      while(t>0)  
      {  
           cin>>N;  
           M=N;  
           count=0;  
           while(N>0)  
           {  
                rem=N%10;  
                if(rem!=0)  
                if(M%rem==0)  
                count++;  
                N=N/10;  
           }  
           cout<<count<<endl;  
           T--;  
      }  
return 0;  
}  