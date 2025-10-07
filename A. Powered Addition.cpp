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
    ll b[n];
    forn(0,n){
        cin>>a[i];
    }
    b[0]=a[0]; ll ans=0;
    for(ll i=1;i<n;i++){
        if(a[i]>=b[i-1]){
            b[i]=a[i]; continue;
        }
        for(ll j=1;j<32;j++){
            ll d=(1<<j) - 1;
            ll diff=b[i-1]-a[i];
            if(d >= diff){
                b[i]=b[i-1];
                if(ans<max(ans,j)){
                    ans=j;
                }
                break;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        solve();
    }
}