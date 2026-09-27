#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll mod;

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    ll n,k;
    cin>>n>>mod>>k;
    vector<ll>dp(n+1,0);
    dp[1]=1;
    dp[2]=1;
    for (int i=3;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])%mod;
    }
    cout<<dp[k];
    return 0;
}
