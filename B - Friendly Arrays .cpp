    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        int n,m;cin>>n>>m;
            vector<int> a(n),b(m);
            int a1=0,b1=0;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                a1=a1 ^ a[i];
            }
            for(int i=0;i<m;i++)
            {
                cin>>b[i];
                b1=b1 | b[i];
            }
     
            int l=a1^b1;
        if(n%2==0)
        {
            int mini=0;
            for(int i=0;i<n;i++)
            {
                int d=a[i] | b1;
                mini=mini ^ d;
            }
            cout<<mini<<" "<<a1<<endl;
        }
        else
        {
            int maxi=0;
            for(int i=0;i<n;i++)
            {
                int d=a[i] | b1;
                maxi=maxi ^ d;
            }
            cout<<a1<<" "<<maxi<<endl;
        }
     
    }
     
    int main() 
    {
        long long t;cin >> t;
        while (t--) 
        {
            solve();
            
        }
        return 0;
    }
