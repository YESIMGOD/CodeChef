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
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            swap(arr[i],arr[i+1]);
        }
        swap(arr[n-2],arr[n-1]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main() {
    fastio;
    tt
    {
    	solve();
    }
	return 0;
}