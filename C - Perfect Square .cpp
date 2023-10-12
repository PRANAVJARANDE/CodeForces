    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
        int t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            vector<vector<int>> v1(n,vector<int>(n));
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    char ch;cin>>ch;
                    v1[i][j]=ch-'a';
                }
            }
            
     
            int r=0;
            long long ans=0;
            while(r<n/2)
            {
                int i=n-r-1,j=r;
                while(j<n-r-1)
                {
                    int a1=v1[r][j];
                    int a2=v1[j][n-r-1];
                    int a3=v1[n-r-1][i];
                    int a4=v1[i][r];
                    int z=max(max(a1,a2),max(a3,a4));
                    ans+=z-a1;
                    ans+=z-a2;
                    ans+=z-a3;
                    ans+=z-a4;
                    
                    i--;
                    j++;
                }
                r++;
            }
            cout<<ans<<endl;     
        }
        return 0;
    }
