#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    string x,y;cin>>x>>y;
    int n=x.size();
    bool b=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==y[i])
        {
            continue;
        }
        else 
        {
            if(b==0)
            {
                b=1;
                if(x[i]>y[i])
                {
                    swap(x[i],y[i]);
                }
            }
            else
            {
                if(x[i]<y[i])
                {
                    swap(x[i],y[i]);
                }
            }
        }
    }
    cout<<x<<endl;
    cout<<y<<endl;
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
