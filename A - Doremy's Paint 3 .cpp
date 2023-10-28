    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
    #define vin vector<int> v1(n); for (int i = 0; i < n; i++) cin >> v1[i]; 
     
    void solve()
    {
        int n;cin>>n;
            unordered_map<int,int> m;
            for(int i=0;i<n;i++)
            {
                int j;cin>>j;
                m[j]++;
            }
        
        if(m.size()>2)
        {
            cout<<"No"<<endl;
            return;
        }
        else if(m.size()==1)
        {
            cout<<"Yes"<<endl;
            return;
        }
        else if(m.size()==2)
        {
            int a1=-1,b1=-1;
            for(auto x: m)
            {
                if(a1==-1)
                {
                    a1=x.second;
                }
                else
                {
                    b1=x.second;
                }
            }
            if(abs(a1-b1)<=1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
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
