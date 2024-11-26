
// BISMILLAHIR RAHMANIR RAHEEM
#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
void solve()
{
   ll n,k;
   cin>>n>>k;
   vector<ll> v;
   for(ll i=1;i*i<=n;i++)
   {
       if(n%i==0)
       {
           v.push_back(i);
           if(i!=(n/i))
           {
               v.push_back(n/i);
           }
       }
   }
  sort(v.begin(),v.end());
   if((ll)v.size()<k)
   {
       cout<<-1<<"\n";
   }
   else
   {
       cout<<v[k-1]<<"\n";
   }
}
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
   // cin>>t;
    int T=1;
    while(t--)
    {
        solve();
    }
}
