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
     mang3ky0u
*/

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    if(n%2==1)
    {
        int a=n;
        for(int i=0;i<n;i++)
        {
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
        return;
    }
    if (n==2)
    {
        cout<<-1<<endl;
        return;
    }
    int y=1;
    for(int i=0;i<n;i++)
    {
        arr[i]=y;
        y++;
    }
    arr[0]=2;
    arr[1]=3;
    arr[2]=1;
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