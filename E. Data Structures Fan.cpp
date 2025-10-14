#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(i,j,m) for(int i=j;i<m;i++)
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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;


void solve(){
   ll n; cin>>n; 
   ll a[n]; 
   forn(i,0,n){
    cin>>a[i];
   }
   string s; cin>>s;
   ll xor0=0,xor1=0;
   ll pre[n+1]; pre[0]=0;
   forn(i,1,n+1){
    pre[i]=pre[i-1]^a[i-1];
   }
   forn(i,0,n){
    if(s[i]=='0'){xor0^=a[i];}
    else{xor1^=a[i];}
   }
   ll q; cin>>q;
   while(q--){
    ll x; cin>>x;
    if(x==2){
        ll g; cin>>g;
        ll ans=g==0 ? xor0:xor1;
        cout<<ans<<" ";
    }
    else{
        ll l,r; cin>>l>>r;
        xor0^=(pre[r]^pre[l-1]);
        xor1^=(pre[r]^pre[l-1]);
    }
   }
   cout<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
    //solve();
}

