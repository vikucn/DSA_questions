/* print a b c d e
         a b c d e
         a b c d e
         a b c d e 
         a b c d e */

#include<iostream>
using namespace std;
int main()
 {
     int row,column;
     cin>>row>>column;
     char a;
     for(int i = 1;i<= row; i++)
     {
         for(int j = 1;j<= column; j++)
         {
             a='a' + (j-1);
             cout<< a<< " ";
         }
         cout<< endl;
     }
 }
