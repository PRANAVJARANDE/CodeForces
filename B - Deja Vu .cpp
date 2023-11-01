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
            int n,q;cin>>n>>q;
            vector<int> a(n),x(q);
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=0;i<q;i++)cin>>x[i];
     
            int l=31;
            for(int i=0;i<q;i++)
            {
                if(l>x[i])
                {
                    for(int j=0;j<n;j++)
                    {
                        int h=pow(2,x[i]);
                        if(a[j]%h==0)
                            a[j]+=h/2;
                    }
                    l=x[i];
                }
            }
     
            for(int x: a)
                cout<<x<<" ";
            
            cout<<endl;
        }
        return 0;
    }
