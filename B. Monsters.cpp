    #include <bits/stdc++.h>
    using namespace std;
     
    bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first > b.first) {
            return true;
        } else if (a.first == b.first && a.second < b.second) {
            return true;
        }
        return false;
    }
     
    int main() 
    {
        long long t;cin >> t;
        while (t--) 
        {
            int n,k;cin>>n>>k;
            vector<pair<int,int>> v1;
            for(int i=0;i<n;i++)
            {
                int tmp;cin>>tmp;
                tmp=tmp%k;
                if(tmp==0)
                {
                    tmp=k;
                }
                v1.push_back({tmp,i+1});
            }
            sort(v1.begin(),v1.end(),cmp);
            for(auto x:v1)
                cout<<x.second<<" ";
            
            cout<<endl;         
            
        }
        return 0;
    }
