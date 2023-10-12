    #include <bits/stdc++.h>
    using namespace std;
     
    void  primeFactors(int n,unordered_map<int, int>&factorFrequency) 
    {
        for (int i = 2; i <= sqrt(n); i ++) 
        {
            while (n % i == 0) {
                n /= i;
                factorFrequency[i]++;
                if (n == i)
                {
                    factorFrequency[i]++;
                    n=n/i;
                    break;
                }
            }
        }
        if (n > 1)
            factorFrequency[n]++;
    }
     
     
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
     
        int t;cin >> t;
        while (t--) 
        {
            unordered_map<int ,int> m;
            int n;cin>>n;
            for(int i=0;i<n;i++)
            {
                int gh;cin>>gh;
                primeFactors(gh,m);
            }
            bool l=0;
            for(auto x: m)
            {
                if(x.second %n !=0)
                {
                    l=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(l==0)
            {
                cout<<"YES"<<endl;
            }
            
        }
        return 0;
    }
