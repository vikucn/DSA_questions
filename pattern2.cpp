/* print 1 1 1 1 1 
         2 2 2 2 2
         3 3 3 3 3 
         4 4 4 4 4 
         5 5 5 5 5 */

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
             cout<<i<<" ";
         }
         cout<<endl;
     }
 }
