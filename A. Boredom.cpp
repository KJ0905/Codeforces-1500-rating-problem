#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(j,m) for(int i=j;i<m;i++)
int mini=INT_MAX;
int maxi=INT_MIN;
ll lmini=INT64_MAX;
ll lmaxi=INT64_MIN;
#define mod 1000000007
#define inf 1e9
//freopen("guess.in","r",stdin);   freopen("billboard.out","w",stdout);
#define all(x) (x).begin(), (x).end()  //sort(all(vec)) instead of sort(vec.begin(), vec.end()).
#define al(x,n) x,x+n
//#define rall(x) (x).rbegin(), (x).rend()
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 

void solve(){
    ll n; cin>>n;
    vector<ll> dp(1e5+1); dp[0]=0;
    map<ll,ll>cnt;
    forn(0,n){
        ll x; cin>>x; cnt[x]++;
    }
    dp[1]=cnt[1];
    for(ll i=2;i<=1e5;i++){
        ll a=dp[i-2]+cnt[i]*i;
        dp[i]=max(dp[i-1],a);
    }
    cout<<dp[1e5]<<endl;
}
int main(){
    KUNAL
        solve();
}