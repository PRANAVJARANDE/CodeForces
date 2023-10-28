    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
    #define vin vector<int> v1(n); for (int i = 0; i < n; i++) cin >> v1[i]; 
     
    bool check(string s,int n)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
                return 0;
        }
        return 1;
    }
     
    void solve()
    {
        int n,m;cin>>n>>m;
        string s,t;
        cin>>s>>t;
     
        if(check(s,n))
        {
            cout<<"Yes"<<endl;
            return;
        }
     
        if(check(t,m)==0)
        {
            cout<<"No"<<endl;
            return;
        }
     
        char l=t[0];
        char r=t[m-1];
     
        if(r!=l)
        {
            cout<<"No"<<endl;
            return;
        }
     
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1] && s[i]==r)
            {
                cout<<"No"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
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
