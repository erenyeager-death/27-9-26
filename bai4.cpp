#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
typedef pair<ll,ll> pll ;

//p: sum, x,stt

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen(problem".INP", "r")){
        freopen(problem".INP", "r", stdin);
        freopen(problem".OUT", "w", stdout);
    }

   ll n;
   cin>>n;
   vector<string>name(n);
   vector<pair<ll,pll>>a(n);
   for (int i=0;i<n;i++){
      string s;
      getline(cin>>ws,s);
      name[i]=s;
    ll x,y;
    cin>>x>>y;
    a[i].first=x+y;
    a[i].second.first=y;
    a[i].second.second=n-i;
    }
    ll trr=3;
    sort(a.rbegin(),a.rend());
    for (int i=0;i<min(trr,n);i++){
        ll st=n-a[i].second.second;
        cout<<st+1<<"\n";
        cout<<name[st]<<"\n";
    }
    return 0;
}
