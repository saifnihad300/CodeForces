#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int a,b,c,n,d;
    int ans;
    cin>>a>>b>>c;
    if(a>b)
    {
        n=(a-b)*2;
    }
    else
    {
        n=(b-a)*2;
    }
    d = max(a,b)-min(a,b);
    ans = c-d;

    if(a>n||b>n||c>n)
    {
        cout<<"-1"<<endl;
    }
    else if(ans<=0)
    {
        ans = c+d;
        cout<<ans<<endl;
    }
    else cout<<ans<<endl;

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
