#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"##";
            }
            else
            {
                cout<<"..";
            }
        }
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"##";
            }
            else
            {
                cout<<"..";
            }
        }
        cout<<endl;
    }
    
}
 
 
int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
