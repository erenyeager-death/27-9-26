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

    ll n, m, x, y;
    cin>>n>>m>>x>>y;
    vector<ll>a(n),b(m);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll res=0;
    ll i=0,j=0;
    while (i<n&&j<m) {
        if (b[j]<a[i]-x) {
            j++;
        } else if(b[j]>a[i]+y) {
            i++;
        } else {
            res++;
            i++;
            j++;
        }
    }
    cout<<res;
    return 0;
}
