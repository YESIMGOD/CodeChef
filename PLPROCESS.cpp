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
    int n;
    cin>>n;
    ll a[n],b[n],s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        b[i]=s;
    }
    ll x=s;
    for(ll i=0;i<n;i++)
    {
        ll d=s-b[i];
        ll t=max(b[i],d);
        x=min(t,x);
    }
    cout<<x<<endl;
}
int main() {
    fastio;
    tt
    {
    	solve();
    }
	return 0;
}