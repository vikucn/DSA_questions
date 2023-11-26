#include <iostream>

using namespace std;
void fact(int n){
    int ans=1;
    while(n>1)
    {
        ans = ans * n;
        n--;
    }
    cout<<ans;
}

int main()
{
    int n;
    cin>>n;
    fact(n);

    return 0;
}
