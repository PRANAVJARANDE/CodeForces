#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,m,k;cin>>n>>m>>k;
        int a=n+(m-n)/n;;
        if(k==1)
        {
            cout<<"1"<<endl;
        }
        else if(k==2)
        {
            if(m<=n)
            {
                cout<<m<<endl;
            }
            else
            {
                cout<<a<<endl;
            }
        }
        else if(k==3)
        {
            if(m<=n)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<m-a<<endl;
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
