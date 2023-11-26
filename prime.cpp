#include<iostream>
using namespace std;
 void prime(int n){
     for(int i=2;i<n;i++)
     {
         if(n%2==0)
         {
             cout<<"Not a Prime Number";
             return;
         }
     }
     cout<<"Prime Number";
 }
 int main()
 {
     int n;
     cin>>n;
     prime(n);
 }
