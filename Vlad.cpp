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
    YESIMGOD
*/

void solve()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    sort(a,a+size);
    if(size==1 and a[size-1]!=1)
        cout<<"NO"<<'\n';
    else if(size==1 and a[size-1]==1)
        cout<<"YES"<<'\n';
    else if(a[size-1]-a[size-2]<=1)
        cout<<"YES"<<'\n';
    else if(a[size-1]-a[size-2]>1)
        cout<<"NO"<<'\n';
}
int main() {
    fastio;
    tt
    {
    	solve();
    }
	return 0;
}