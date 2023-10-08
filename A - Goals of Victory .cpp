    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
     
        int t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            long long s=0;
            for(int i=0;i<n-1;i++)
            {
                int k;cin>>k;
                s+=k;
            }
            s=-s;
            cout<<s<<endl;
            
        }
        return 0;
    }
