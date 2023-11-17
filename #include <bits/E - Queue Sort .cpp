#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
    int n;cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
        
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIndex]) 
        {
            minIndex = i;
        }
    }
 
    int res = minIndex;
    for (int i = minIndex; i < n - 1; i++) 
    {   
        if (arr[i] > arr[i + 1])
        {
            cout<<"-1"<<endl;
            return ;
        }
    }
    cout<<res<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
