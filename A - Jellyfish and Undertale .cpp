    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
     
        int t;cin >> t;
        while (t--) 
        {
            int a,b,n;cin>>a>>b>>n;
            vector<int> v1(n);
            long long s=b;
            for(int i=0;i<n;i++)
            {
                cin>>v1[i];
                s+=min(a-1,v1[i]);
            }
            cout<<s<<endl;
        }
        return 0;
    }
