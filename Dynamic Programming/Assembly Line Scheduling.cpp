#include <bits/stc++.h>
using namespace std;


int prodassemb(int a[][5],int t[][4], int e[2], int x[2])
{
    int f1[5],f2[5];
    f1[0]=e[0]+a[0][0];
    f2[0]=e[1]+a[1][0];
    for(int i=1;i<5;i++)
    {
        f1[i]=min(f1[i-1]+a[0][i],f2[i-1]+t[1][i-1]+a[0][i]);
        f2[i]=min(f2[i-1]+a[1][i],f1[i-1]+t[0][i-1]+a[1][i]);
    }
    return min(f1[4]+x[0],f2[4]+x[1]);
}
int main()
{
    int a[2][5]={{12,23,11,8,9},{10,15,7,8,5}};
    int t[2][4]={{2,3,1,3},{2,1,2,2}};
    int e[2]={2,3};
    int x[2]={3,5};
    cout<<"Optimal Output: "<<prodassemb(a.t.e.x)<<endl;
    return 0;
}