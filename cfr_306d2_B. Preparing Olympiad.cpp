#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<ll>v;
int n,x,cnt=0;
ll l,r;


void solve(ll a[], int idx = 0, ll sum = 0)
{

    if(idx==n)
    {
        ll mini = 1e10, maxi = 0;
        for(auto i:v)
        {
            mini = min(mini, i);
            maxi = max(maxi, i);
        }
        if(sum >= l && sum <= r && maxi-mini>=x)
        {
            cnt++;
        }
        return;
    }
    if(sum+a[idx]<=r)
    {
        v.push_back(a[idx]);
        solve(a,idx+1,sum+a[idx]);
        v.pop_back();
    }
    solve(a, idx+1, sum);
}
int main()
{
    cin>>n>>l>>r>>x;

    ll a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    solve(a);
    cout<<cnt<<endl;
    return 0;

}
//Note:
//This problem cann't solved properly yet. The recursion basics must need to know.
//Another ways to solve this problem bitwise operation.
