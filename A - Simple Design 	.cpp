    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
     
     
    void solve()
    {
        int x,k;cin>>x>>k;
        for(int i=0;i<20;i++)
        {
            int s=0;
            int num=x+i;
            while(num!=0)
            {
                int rem=num%10;
                s+=rem;
                num/=10;
            }
            if(s%k==0)
            {
                cout<<x+i<<endl;
                return;
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
