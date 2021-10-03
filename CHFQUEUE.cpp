
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
 ll n,i,k,freq=0,len=1,j,uni=0,sum=0,flag=0,m=0,q,c=-1,maxi=1000000007;
 cin>>n>>k;
 vector<ll>v(n);
 for(i=0;i<n;i++)
 {
    cin>>v[i];
 }
 stack<pair<ll,ll>>s;
 reverse(v.begin(),v.end());
 ll ans=1;
 for(i=0;i<n;i++)
 {
    while(!s.empty()&&s.top().first>=v[i])
    {
        s.pop();
    }
    if(!s.empty())
    {
        ans=(ans*(i-s.top().second+1))%maxi;
    }
   // cout<<ans<<endl;
    s.push({v[i],i});

 }
 cout<<ans<<endl;
}



