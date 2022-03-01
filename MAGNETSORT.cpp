/* Feb Lunchtime 22 */

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define endl "\n"
#define F first
#define S second
#define tt int t;cin>>t;while(t--)
#define all(x) x.begin(),x.end()
#define pb push_back
#define vt vector<ll>
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define ran(v) for(auto &i:v)
#define mem(dp) memset(dp,-1,sizeof(dp))
/*
     dr3am
*/

void solve()
{
    ll n,y;
    cin>>n;
    vt a;
    for(ll i=0;i<n;i++)
    {
        cin>>y;
        a.push_back(y);    
    }
    string str;
    cin>>str;
    if(is_sorted(all(a)))
    {
      cout<<0<<endl;
      return;
    }
    int c=0;
    for(auto y: str)
    if(y == 'N')
        c++;
    if(c == n || c == 0){
      cout << -1 << endl;
      return;
    }
    vt b = a;
    sort(all(a));
    ll start = INT_MAX, last = INT_MIN;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            start = min(i, start);
            last = max(last, i);
        }
    }
    bool f1 = false, f2 = false;
    for(ll i = 0; i < start; i++)
        if(str[i] != str[last])
            f1 = true;
    for(ll i = last; i < n; i++)
        if(str[i] != str[start])
            f2 = true;
    if(str[start] != str[last] or f1 || f2)
        cout << 1;
    else 
        cout << 2;
    cout << endl;
}
int main() {
    fastio;
    tt
    {
    	solve();
    }
	return 0;
}