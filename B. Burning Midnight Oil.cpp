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

bool possible(ll mid,ll k,ll n){
    ll ans=0;
    if(mid>=n){return true;}
    ll a=1;
    while(mid/a){
        ans+=mid/a; a*=k;
    }
    return ans>=n;
}
void solve(){
    ll n,k; cin>>n>>k;
    ll ans=0;
    ll s=1,e=n;
    while(s<=e){
        ll mid=(s+e)>>1;
        if(possible(mid,k,n)){
            ans=mid; e=mid-1;
            //cout<<ans<<endl;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
          solve();
}