#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {   
        int n;cin>>n;
        if(n<7 || n==9)
        {
            cout<<"NO"<<endl;
        }
        else if(n%3!=0)
        {
            cout<<"YES"<<endl;
            cout<<"1 2 "<<n-3<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<"1 4 "<<n-5<<endl;
        }
    }
    return 0;
}
