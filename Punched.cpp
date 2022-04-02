#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/*
    DR3am
*/
int main()
{
    int t,p=1;cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        cout<<"Case #"<<p<<":"<<endl;
        cout<<"..+";
        for(int i=0;i<(c-1);i++)
        {
            cout<<"-+";
        }
        cout<<endl<<"..|";
        for(int i=0;i<(c-1);i++)
        {
            cout<<".|";
        }
        cout<<endl<<"+-+";
        for(int i=0;i<(c-1);i++)
        {
            cout<<"-+";
        }
        for(int i=1;i<=r-1;i++)
        {
            cout<<endl<<"|";
            for(int j=1;j<=c;j++)
            {
                cout<<".|";
            }
            cout<<endl<<"+";
            for(int j=1;j<=c;j++)
            {
                cout<<"-+";
            }
        }
        p++;
        cout<<endl;
    }
    return 0;
}