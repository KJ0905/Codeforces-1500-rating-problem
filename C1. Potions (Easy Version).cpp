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
    ll a[n];
    forn(0,n){
        cin>>a[i];
    }
  //  ll dp[n+1][n+1];
  //  memset(dp, -1, sizeof(dp));
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
    for(ll i=1;i<n+1;i++){
        if(a[i-1]>=0){
            dp[i][1]=max(dp[i-1][1],a[i-1]);
        }
    }
    for(ll i=1;i<n+1;i++){
            dp[i][1]=max(dp[i-1][1],dp[i][1]);
    }
    dp[0][0]=0;
    for(ll i=1;i<=n;i++){
        for(ll k=2;k<=n;k++){
            if(dp[i-1][k-1]+a[i-1] >=0 && dp[i-1][k-1]>=0){
                dp[i][k]=max(dp[i-1][k-1]+a[i-1] , dp[i-1][k]);
            }
            else{
                dp[i][k]=dp[i-1][k];
            }
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(dp[n][i]>=0){
            ans=i;
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
         solve();
}