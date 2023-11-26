/* print a a a a a 
         b b b b b
         c c c c c
         d d d d d 
         e e e e e */

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
             a='a' + (i-1);
             cout<< a<< " ";
         }
         cout<< endl;
     }
 }
