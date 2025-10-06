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
    vector<pair<ll,ll>>p(n);
    forn(0,n){
        ll x,h; cin>>x>>h;
        p[i]={x,h};
    }
    ll cnt=1;
    for(ll i=1;i<n;i++){
        if(i==n-1){
            cnt++; continue;
        }
        ll x=p[i].first,h=p[i].second;
        if(x-h > p[i-1].first){
            cnt++; continue;
        }
        if(x+h < p[i+1].first){
            cnt++; p[i].first+=h; continue;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    KUNAL
        solve();
}