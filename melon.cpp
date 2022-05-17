#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    fastio;
    int n;cin>>n;
    if(n%2==0 and n>2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}