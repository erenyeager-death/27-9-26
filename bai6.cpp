#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<int> a(n), b(n), vals;
    for (int i=0;i< n;++i) {
        cin>>a[i]>> b[i];
        vals.push_back(a[i]);
        vals.push_back(b[i]);
    }
    sort(vals.begin(),vals.end());
    vals.erase(unique(vals.begin(),vals.end()),vals.end());
    auto get=[&](int x) {
        return lower_bound(vals.begin(),vals.end(), x)-vals.begin();
    };
    ll m=vals.size();
    vector<ll>d(m+2,0);
    for (int i=0;i<n;++i) {
        d[get(a[i])]++;
        d[get(b[i])+1]--;
    }
    int c=0,ans=0;
    for (int i=0;i<= m;++i) {
        c+=d[i];
        ans=max(ans, c);
    }
    cout<<ans;
    return 0;
}
