#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node {
    ll a, b;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("SUAXE.INP", "r", stdin);
    // freopen("SUAXE.OUT", "w", stdout);

    ll n;cin>>n;
    vector<Node>a(n);
    for (int i=0;i<n;++i)cin>>a[i].a;
    for (int i=0;i<n;++i)cin>>a[i].b;
    sort(a.begin(),a.end(),[](const Node &x, const Node &y) {
        return x.b*y.a<y.b*x.a;
    });
    ll ans=0,t=0;
    for (const auto &x : a) {
        t+=x.b;
        ans+=t*x.a;
    }

    cout<<ans<<'\n';
    return 0;
}
