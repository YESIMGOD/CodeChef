/* Qualification Round CodeJam 2022 */

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/*
    DR3AM
*/

int main()
{
    int t,p=1;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n],cnt=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(b<a[i])
            {
                b++;
                cnt++;
            }
        }
        cout<<"Case #"<<p<<": "<<cnt<<endl;
        p++;
    }
    return 0;
}