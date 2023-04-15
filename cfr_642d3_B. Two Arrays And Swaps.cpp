#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n,k;
    cin>>n>>k;
    int arrx[n], arry[n], sum = 0;
    for(int i=0;i<n;i++)
    {
       cin>>arrx[i];
    }
    sort(arrx, arrx+n);
    for(int j=0;j<n;j++)
    {
        cin>>arry[j];
    }
    sort(arry, arry+n);
    reverse(arry, arry+n);
    for(int i=0;i<k;i++)
    {
       if(arrx[i]<arry[i])
       {
           swap(arrx[i],arry[i]);
       }
    }
    for(int i=0;i<n;i++)
    {
        sum+=arrx[i];
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

//@auth: vjudge2
