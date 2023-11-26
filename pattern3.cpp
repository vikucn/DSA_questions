/* print 1 4 9 16 25 
         1 4 9 16 25
         1 4 9 16 25
         1 4 9 16 25 
         1 4 9 16 25 */

#include<iostream>
using namespace std;
int main()
 {
     int row,column;
     cin>>row>>column;
     for(int i=1;i<=row;i++)
     {
         for(int j =1;j<=column;j++)
         {
             cout<<j*j<<" ";
         }
         cout<<endl;
     }
 }
