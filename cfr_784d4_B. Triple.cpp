#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, a;
    cin>>n;
    int cnt[n];
    for(int i=1; i<=n; i++) cnt[i]=0;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        cnt[a]++;
    }
    int ans = -1;
    for(int i=1; i<=n; i++)
    {
        if(cnt[i]>=3)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}




//@dxdydw#
