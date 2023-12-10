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
            ll a,b;cin>>a>>b;
            ll xk,yk;cin>>xk>>yk;
            ll xq,yq;cin>>xq>>yq;

            set<pair<ll,ll>> m;
            m.insert({xk+a,yk-b});
            m.insert({xk+a,yk+b});
            m.insert({xk-a,yk-b});
            m.insert({xk-a,yk+b});
            m.insert({xk+b,yk-a});
            m.insert({xk+b,yk+a});
            m.insert({xk-b,yk-a});
            m.insert({xk-b,yk+a});

            set<pair<ll,ll>> p;
            p.insert({xq+a,yq-b});
            p.insert({xq+a,yq+b});
            p.insert({xq-a,yq-b});
            p.insert({xq-a,yq+b});
            p.insert({xq+b,yq-a});
            p.insert({xq+b,yq+a});
            p.insert({xq-b,yq-a});
            p.insert({xq-b,yq+a});

            ll ans=0;
            for(auto x: m)
            {
                for(auto y: p)
                    if(x.first==y.first && x.second==y.second)
                    {
                        ans++;
                    }
                        
            }
            cout<<ans<<endl;
        }
        return 0;
    }
