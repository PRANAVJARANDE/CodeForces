    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        int t;cin >> t;
        while (t--) 
        {
            int n,k;cin>>n>>k;
            unordered_map<int,int> m;
            for(int i=0;i<n;i++)
            {
                int x;cin>>x;
                m[x]++;
            }
            if(m.find(k)!=m.end())
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

