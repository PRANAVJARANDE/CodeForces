#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
 
int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int q;cin >> q;
    vector<int> freq(32,0);
    while (q--) 
    {
        int t,v;cin>>t>>v;
        if(t==1)
        {
            freq[v]++;
        }
        else
        {
            int num=v;
            bool b=0;
            vector<int> freqq=freq;
            for(int i=0;i<31;i++)
            {
                if(num & (1<<i))
                {
                    if(freqq[i]==0)
                    {
                        cout<<"NO"<<endl;
                        b=1;
                        break;
                    }
                    freqq[i]--;
                }
                freqq[i+1]+=freqq[i]/2;
            }            
            if(b==0)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
