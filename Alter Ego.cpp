#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll>ans(n),eve,odd;
    for (int i=0;i<n;i++)
    {
        ll k;cin>>k;
        if(k%2==0)
            eve.push_back(k);
        else
            odd.push_back(k);
    }

    int e1 = eve.size(),o1 = odd.size();
    if(e1%2==1 || o1%2==1)
    {
        cout<<"-1"<<endl;
        return;
    }
    
    sort(eve.begin(), eve.end());
    sort(odd.begin(), odd.end());
    
    int in=0;
    int i = 0;
    int j = e1 - 1;
    while(i<j)
    {
        ll op1=(eve[i] + eve[j])/2;
        ll op2=(eve[j] - eve[i])/2;
        ans[in]=op1;
        ans[in+(n/2)]=op2;
        in++;
        i++;
        j--;
    }

    i = 0;
    j = o1-1;
    while (i < j)
    {
        ll op1 = (odd[i] + odd[j]) / 2;
        ll op2 = (odd[j] - odd[i]) / 2;
        ans[in]=op1;
        ans[in+(n/2)]=op2;
        in++;
        i++;
        j--;
    }

    for (ll x : ans)
        cout << x << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
