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
    ll n,d; cin>>n>>d;
    vector<pair<ll,ll>>p(n);
    forn(0,n){
        ll m,s; cin>>m>>s; p[i]={m,s};
    }
    sort(all(p));
    vector<ll>pre(n+1);
    for(ll i=1;i<n+1;i++){
        pre[i]=pre[i-1]+p[i-1].second;
    }
    ll ans=INT64_MIN;
    for(ll i=0;i<n;i++){
        ll s=0,e=n-1; ll ind;
        while(s<=e){
            ll mid=(s+e)>>1;
            if(p[mid].first-p[i].first <d){
                ind=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        ans=max(ans,(pre[ind+1]-pre[i]));
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
        solve();
}