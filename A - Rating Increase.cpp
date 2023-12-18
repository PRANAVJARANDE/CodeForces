#include <iostream>
using namespace std;
 
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
 
    for (int i = 1; i < n; i++)
    {
        while (i < n && s[i] == '0')
        {
            i++;
        }
        if (i == n)
        {
            cout << "-1" << endl;
            return;
        }
 
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
 
        int i1 = stoi(s1);
        int i2 = stoi(s2);
 
        if (i1 < i2)
        {
            cout << s1 << " " << s2 << endl;
            return;
        }
    }
    cout << "-1" << endl;
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
