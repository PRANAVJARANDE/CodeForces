    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
     
        int t;cin >> t;
        while (t--) 
        {
            int a,b,c;cin>>a>>b>>c;
            int z=__gcd(a,__gcd(b,c));
     
            int ans=0;
            ans+=a/z;
            ans--;
            ans+=b/z;
            ans--;
            ans+=c/z;
            ans--;
            
     
            if(ans<=3)
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
