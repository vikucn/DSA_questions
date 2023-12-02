/* print   * * * * * * * * *
             * * * * * * *
               * * * * *
                 * * *
                   *.        */
         
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<i;s++)
        cout<<"  ";
       
        for(int j=i;j<=2*n-i;j++)
        cout<<"*"<<" ";
       
        
        
        cout<<endl;
    }
    
}
