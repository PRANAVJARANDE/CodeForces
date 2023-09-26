    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        long long t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            vector<int>a(n);
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            int k=0;
            for(int i=0;i<n;i++)
            {
                int in=i+1;
                if(in+k==a[i])
                {
                    k++;
                }
            }
            cout<<n+k<<endl;
        }
        return 0;
    }
