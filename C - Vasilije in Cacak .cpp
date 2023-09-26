    #include <bits/stdc++.h>
    using namespace std;
     
    long long sumOfAP(long long a, long long d, long long n) 
    {
        long long sum = (n * (2 * a + (n - 1) * d)) / 2;
        return sum;
    }
     
    int main() 
    {
        int t;cin >> t;
        while (t--) 
        {
            long long n,k,x;cin>>n>>k>>x;
            long long mini=sumOfAP(1,1,k);
            long long maxi=sumOfAP(n,-1,k);
            if(mini<=x && x<=maxi)
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
