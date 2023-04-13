#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int>arr;

    for(int i=1;i<=100000;i++)
    {
        if(i%3==0 || i%10==3)
        {
            continue;
        }
        else
        {
            arr.push_back(i);
        }
    }

    int ans = arr[n-1];
    cout<<ans<<endl;
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
