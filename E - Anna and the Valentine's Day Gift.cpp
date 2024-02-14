    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long

    int gtc(int n)
    {
        int c=0;
        while(n!=0)
        {
            c++;
            n/=10;
        }
        return c;
    }

    int gtzzz(int n)
    {
        int c=0;
        while(n%10==0)
        {
            c++;
            n/=10;
        }
        return c;
    }

    void solve()
    {
        ll n,m;cin>>n>>m;
        vector<ll> a(n);
        ll c=0;
        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            c+=gtc(a[i]);
            int z=gtzzz(a[i]);
            if(z!=0)
            {
                v1.push_back(z);
            }
        }
        sort(v1.begin(),v1.end(),greater<int>());
        for(int i=0;i<v1.size();i+=2)
        {
            c-=v1[i];
        }
        if(c>m)cout<<"Sasha"<<endl;
        else cout<<"Anna"<<endl;
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
