    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        long long t;cin >> t;
        while (t--) 
        {
            int n,k;cin>>n>>k;
            unordered_map<int,int> m;
            vector<int> v1(n);
            for(int i=0;i<n;i++)cin>>v1[i];
            
            int i=0,c1=0;
            while(i<n && c1!=k)
            {
                if(v1[i]==v1[0])
                {
                    c1++;   
                }
                i++;
            }
            if(c1!=k)
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(v1[0]==v1[n-1])
            {
                cout<<"YES"<<endl;
                continue;
            }
            int c2=0;
            while(i<n && c2!=k)
            {
                if(v1[i]==v1[n-1])
                {
                    c2++;
                }
                i++;
            }
            if(c2!=k)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
        }
        return 0;
    }
