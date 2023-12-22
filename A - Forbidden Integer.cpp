#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if(k==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    if (k == 2 && x == 1)
    {
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            cout<<(int)n/2<<endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << "2 ";
            }
            cout << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (x != 1)
    {
        cout << "YES" << endl;
        cout<<n<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << "1 ";
        }
        cout << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            cout<<(int)n/2<<endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << "2 ";
            }
            cout << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout<<(int)n/2<<endl;
            cout << "3 ";
            n -= 3;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << "2 ";
            }
            cout << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
