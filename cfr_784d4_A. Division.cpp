#include<bits/stdc++.h>
using namespace std;

void Cal_rating(int rating)
{

    if(rating>=1900)
        cout<<"Division 1"<<endl;
    else if (rating>=1600 && rating<=1899)
        cout<<"Division 2"<<endl;
    else if(rating>=1400 && rating<=1599)
        cout<<"Division 3"<<endl;
    else
        cout<<"Division 4"<<endl;
}

void solve()
{
    int rating;
    cin>>rating;
    Cal_rating(rating);
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
