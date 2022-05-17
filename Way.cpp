#include <bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    
    string s;cin>>s;
    int l=s.length();
    if(l>10)
        cout<<s[0]<<l-2<<s[l-1]<<endl;
    else
        cout<<s<<endl;
}
int main()
{
    fastio;
    tt
    {   
        solve();
    }
    return 0;
}