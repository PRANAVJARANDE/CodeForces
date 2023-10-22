    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
        int t;cin >> t;
        while (t--) 
        {
            int n,k;cin>>n>>k;
            string s;cin>>s;
     
            unordered_map<char,int> m;
            for(int i=0;i<n;i++)m[s[i]]++;
            
            int kk=0;
            for(auto x: m)
            {
                if(((x.second)%2)==1)
                {
                    kk++;
                }
            }
     
            int sl=1+k;
            if(kk<=sl)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
     
            
        }
        return 0;
    }
