#include<iostream>
using namespace std;

void fibo(int n)
{
    int a=0;
    int b=1;
    int c,k;
    for( k=3;k<=n;k++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    
}
