#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen(problem".INP", "r")){
        freopen(problem".INP", "r", stdin);
        freopen(problem".OUT", "w", stdout);
    }

   ll n,c;
   cin>>n>>c;
   vector<pair<ll,ll>>a(n);
   for (int i=0;i<n;i++)cin>>a[i].first>>a[i].second;
   sort(a.begin(),a.end());
   ll res=0;
   for (int i=0;i<n;i++){
        if (c>=a[i].first)c+=a[i].second;
        else break;
            res++;
   }
   cout<<res;
    return 0;
}
