#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(init,m) for(int i=init;i<m;i++)
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
#define getsubstr(x,startingindex,length) x.substr(startingindex,length)
#define getsubst(x,startingindex) x.substr(startingindex) // to get substring from startingindex upto end.
// Conversion of int,float into string using to_string(intvalue)

vector<ll>a;
vector<ll>net;
bool possible(ll r,ll n,ll m){
    vector<pair<ll,ll>>range(m);
    forn(0,m){
        range[i].first=net[i]-r;
        range[i].second=net[i]+r;
    }
    ll j=0;
    ll cnt=0;
    forn(0,n){
        while (j < m && a[i] > range[j].second) j++;
        if (j == m) return false; 
        if (a[i] < range[j].first) return false;
    }
    return true;
}
void solve(){
    ll n,m; cin>>n>>m;
    a=vector<ll>(n);
    forn(0,n){
        cin>>a[i];
    }
   net=vector<ll>(m);
    forn(0,m){cin>>net[i];}
    ll s=0,e=2*1e9,ans=0;
    while(s<=e){
        ll r=(s+e)>>1;
        if(possible(r,n,m)){
            ans=r; e=r-1;
        }
        else{
            s=r+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
    solve();
}