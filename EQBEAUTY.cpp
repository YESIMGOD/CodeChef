/* SnackDown 21 Round 1A */
/* dr3am */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,k,r1=0,r2=0,a,b;
        ll o=INT_MAX;
        cin>>n;
        vector<ll>ar(n);
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar.begin(),ar.end());
        ll p=1,q=n-2;
        if(n==2)
        {
            cout<<0<<endl;
            continue;
        }
        else if(n==3)
        {
            cout<<min(ar[1] -ar[0],ar[2]-ar[1])<<endl;
            continue;
        }
        for(ll i=0;i<n-1;i++)
        {r1 += abs(ar[i]-ar[(n-1)/2]);}
        for(ll i=1;i<n;i++)
            r2 += abs(ar[i]-ar[1+(n-1)/2]);
        o=min(r1,r2);
        
        while(p<q)
        {
            b=ar[n-1]-ar[p],a=ar[q]-ar[0];
            o=min(o,abs(a-b));
            if(a<b)
                p++;
            else
                q--;
        }
        cout<<o<<endl;
    }
    return 0;
}